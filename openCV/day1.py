import cv2 as cv

image = cv.imread("images/apples.jpg") #membuat variabel image
dimensi = (int(image.shape[1]*0.5), int(image.shape[0]*0.5)) #mdimensi image
image_resize = (cv.resize(image, dimensi)) #untuk meresize image
image_gray = cv.cvtColor(image_resize, cv.COLOR_BGRA2GRAY) #membuat image abu2
image_hsv = cv.cvtColor(image_resize, cv.COLOR_BGR2HSV) #mengubah bgr mjd hsv
cv.rectangle(image_resize, (0,0), (200,200), (0, 0, 200), 5) #menggambar kotak di gambar
cv.circle(image_resize, (50,50), 50, (0, 0, 255), -1) #membuat lingkarans
cv.imshow("jendela saya", image_resize)

cv.waitKey(0)