#include<opencv2/opencv.hpp>
#include<opencv2/core/utility.hpp>
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
#include<iostream>
using namespace std;
using namespace cv;
int main()
{
	Mat image1,final_im;
	float angle;
	image = imread("sample.jpg");
	cout << "Dimensions are " << image.rows << " " << image.cols << endl;
	if (image1.empty())
	{
		cout << "Error Loading Image!" << endl;
	}
	else
	{
		cout << "Enter rotation angle: ";
		cin >> angle;
		Point2f pt(image.cols / 2., image.rows / 2.);
		Mat v = getRotationMatrix2D(pt, angle, 1.0);
		warpAffine(image, final_im, v, Size(image.cols, image.rows));
		imshow("Image Before Rotation", image);
		imshow("Image After Rotation", final_im);
		waitKey(0);
	}
return 0;
}
