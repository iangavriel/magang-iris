import cv2 as cv

def main():
    image = cv.imread("images/bola.png")
    dimensi = (int(image.shape[1]*0.5), int(image.shape[0]*0.5)) 
    image_resize = (cv.resize(image, dimensi))
    image_hsv = cv.cvtColor(image_resize, cv.COLOR_BGR2HSV)
    L_H = 0 
    U_H = 68
    L_S = 9
    U_S = 246
    L_V = 241
    U_V = 255
    thresh = cv.inRange(image_hsv, (L_H, L_S, L_V), (U_H, U_S, U_V))
    cv.imshow("jendela saya", thresh)
    cv.waitKey(0)

if __name__ == '__main__':
    main()