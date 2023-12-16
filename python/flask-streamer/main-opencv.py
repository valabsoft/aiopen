import cv2

def show_webcam():
    camera = cv2.VideoCapture(0)
    while True:
        ret, img = camera.read()
        cv2.imshow('web-cam capture', img)
        if cv2.waitKey(1) == 27:
            break;
    cv2.destroyAllWindows()

if __name__ == '__main__':
    show_webcam()
    