#include "RectangularCube.h"
using namespace std;
//Default Constructor
RectangularCube::RectangularCube() {
	length = 1;
	width = 1;
	height = 1;

}
RectangularCube::RectangularCube(int length, int width, int height) {
	this->length = length;
	this->width = width;
	this->height = height;

}


//updated GetSides Function
void RectangularCube::GetSides() {
	cout << "L = " << length << ", W = " << width << ", H = " << height;
}

//The SetSides function with no arguments randomizes the sides
void RectangularCube::SetSides() {
	length = rand() % 10 + 1;
	width = rand() % 10 + 1;
	height = rand() % 10 + 1;
}


void RectangularCube::SetSides(int length, int width, int height) {
	if (length != -1) {
		this->length = length;
	}
	if (width != -1) {
		this->width = width;
	}
	if (height != -1) {
		this->height = height;
	}
}

int RectangularCube::CalSurfaceArea() {
	return ((2 * (length * width)) + (2 * (length * height)) + (2 * (width * height)));
}

int RectangularCube::CalVolume() {
	return (length * width * height);
}