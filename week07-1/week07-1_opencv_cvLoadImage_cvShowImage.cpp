///week07-1_opencv_cvLoadImage_cvShowImage.cpp
///�ɦW�@�w�n .cpp

#include <opencv/highgui.h>

int main()
{
     IplImage * img = cvLoadImage("image.jpg");
     cvShowImage("week07", img);
     cvWaitKey(0); ///�e�����n�{�h,���@�U�����N���~��
}
