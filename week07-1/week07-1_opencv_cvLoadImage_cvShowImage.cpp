///week07-1_opencv_cvLoadImage_cvShowImage.cpp
///檔名一定要 .cpp

#include <opencv/highgui.h>

int main()
{
     IplImage * img = cvLoadImage("image.jpg");
     cvShowImage("week07", img);
     cvWaitKey(0); ///畫面不要閃退,等一下按任意鍵繼續
}
