#include <iostream>
#include "opencv2\opencv.hpp"  
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
using namespace std;
using namespace cv;


int main(int argc, char** argv)
{
    Mat matSrc = imread("../lena.jpg", IMREAD_GRAYSCALE);

    if (!matSrc.data)
    {
        return -1;
    }



    imshow("Tempalte", matSrc);
    while (char(waitKey(1)) != 27) {}

    return 0;
}

