#ifndef _RECTANGULARCUBE_

#define _RECTANGULARCUBE_

#include <iostream>
#include <string>
#include <cmath>
using namespace std;


class RectangularCube {
private:
	int length;
	int width;
	int height;

public:
	RectangularCube();

	RectangularCube(int length, int width, int height);

	friend ostream& operator<<(ostream& stream, RectangularCube& rectangle);
	friend bool operator<(RectangularCube& firstRectangle, RectangularCube& secondRectangle);
	RectangularCube operator+(RectangularCube& secondCube);
	long operator[](const int& index);
	
	void GetSides();

	void SetSides(int length, int width, int height);

	int CalSurfaceArea();

	int CalVolume();
};

#endif // _RECTANGULARCUBE_