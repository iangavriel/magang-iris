import cv2 as cv

capture = cv.VideoCapture("videos/bolaCompressed.mp4") #meng-assign video ke variable capture

while True:
    isTrue, frame = capture.read() #selama True, video tetap diread
    dimensi = (int(frame.shape[1]*0.5), int(frame.shape[0]*0.5)) #meresize video (pada ini tiap frame diresize)
    frame_resize = (cv.resize(frame, dimensi))
    frame_hsv = cv.cvtColor(frame_resize, cv.COLOR_BGR2HSV) #mengubah warna video jd hsv
    L_H = 0 
    U_H = 68
    L_S = 9
    U_S = 246       #mendeklarasikan nilai hue, saturation, value
    L_V = 241
    U_V = 255
    thresh = cv.inRange(frame_hsv, (L_H, L_S, L_V), (U_H, U_S, U_V)) 
    contours, _ = cv.findContours(thresh, cv.RETR_TREE, cv.CHAIN_APPROX_NONE) #membuat variabel contour
     #cv.drawContours(frame_resize, contours, -1, (255, 0, 0), 3) #menggambar contour pada video
    for i in range(len(contours)): 
        kontur_baru = contours[i]
        (x,y), radius = cv.minEnclosingCircle(kontur_baru)
        center = (int(x), int(y))
        if(int(radius) > 30):
            contours.append(kontur_baru)
            cv.circle(frame_resize, center, int(radius), (0, 0, 255), 5) #menggambar lingkaran di setiap kontur yang jari2 > 50
    cv.imshow("jendelaku", frame_resize) #menampilkan video
    if cv.waitKey(1) & 0xFF == ord('q'): #jika key q ditekan, while dibreak
        break

capture.release() #menghentikan aktivitas pada variabel capture
cv.destroyAllWindows() #mengeluarkan windows