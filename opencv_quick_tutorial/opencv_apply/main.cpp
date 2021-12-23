#include "apply.h"

int main(int argc, void** argv)
{
	const char* image = "C:/images/flower.png";
	OpencvHelper oh;
	Mat src;
	src = imread(image);
	imshow("src", src);
	if (src.empty())
	{
		cout << "could not load image.." << endl;
		return -1;
	}
	oh.blend_demo();

	waitKey(0);
	destroyAllWindows();

	return 0;
}