/*

 * project_zero_thresholding.cpp
 *
 *  Created on: Jan 15, 2015
 *      Author: yuengdelahoz


#include <cv.h>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <string>

using namespace cv;

int main(int argc, char** argv) {
	Mat image, thresholded;
	int height, width, th1, th2;
	uchar pixValue;
	string filename;

	if (argc == 3) {
		filename = argv[0];
		th1 = atoi(argv[1]);
		th2 = atoi(argv[2]);
	} else {
		th1 = 50;
		th2 = 175;
		filename = "src/Project Zero/Images/Lenna.png";
	}

	//Read image

	image = imread(filename, 1);
	height = image.rows;
	width = image.cols;

	// Convert to grayscale
	cvtColor(image, image, CV_BGR2GRAY);

	//Threshold image
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < height; j++) {
			pixValue = image.at<uchar>(i, j);
			if (pixValue >= th1 && pixValue <= th2) {
				image.at<uchar>(i, j) = 255;
			} else
				image.at<uchar>(i, j) = 0;
		}
	}


	namedWindow("Display window", WINDOW_AUTOSIZE); // Create a window for display.
	imshow("Display window", image);                // Show our image inside it.


	//Write Results
	imwrite("src/Project Zero/Images/Thresholded.png", image);

	// Wait for a keystroke in the window
	waitKey(0);
	return 0;
}
 */

