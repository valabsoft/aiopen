from flask import Flask, render_template, Response
from waitress import serve
import cv2

# Python sets the __name__ variable to the module name,
# so the value of this variable will vary depending on the Python source file in which you use it.
app = Flask(__name__)
# Захват камеры по умолчанию
camera = cv2.VideoCapture(0)


# Функция генерации видеопотока
def gen_frames():
    while True:
        # Захват кадров от камеры
        success, frame = camera.read()
        # Проверка результата захвата
        if not success:
            break
        else:
            # Кодируем изображение
            ret, buffer = cv2.imencode('.jpg', frame)
            # Преобразуем в массив байт
            frame = buffer.tobytes()
            yield (b'--frame\r\n'
                   b'Content-Type: image/jpeg\r\n\r\n' + frame + b'\r\n')  # concat frame one by one and show result


# Задаем маршрут, по которому пойдет чистый видеопоток
@app.route('/video_feed')
def video_feed():
    # Video streaming route. Put this in the src attribute of an img tag
    return Response(gen_frames(), mimetype='multipart/x-mixed-replace; boundary=frame')


# Задаем маршрут страницы по умолчанию
@app.route('/')
def index():
    return render_template('index.html')


if __name__ == '__main__':
    _ip = '127.0.0.1'
    _port = 8080
    # Для отладки может быть использован локальный сервер
    # app.run(debug=True)
    print('Live streaming started: http://{0}:{1}'.format(_ip, _port))
    serve(app, host=_ip, port=_port)
    print('Live streaming stopped...')
