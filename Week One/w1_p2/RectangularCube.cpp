#include "RectangularCube.h"
using namespace std;
//Default Constructor
RectangularCube::RectangularCube() {
	length = 1;
	width = 1;
	height = 1;

}
//Constructor with Arguments
RectangularCube::RectangularCube(int length, int width, int height) {
	this->length = length;
	this->width = width;
	this->height = height;

}

void RectangularCube::GetSides() {
	cout << "Sides for " << name << ": " << endl;
	cout << "Length: " << length << endl;
	cout << "Width: " << width << endl;
	cout << "Height: " << height << endl << endl;
}

// when setting sides, unaffected sides should be input as -1

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
