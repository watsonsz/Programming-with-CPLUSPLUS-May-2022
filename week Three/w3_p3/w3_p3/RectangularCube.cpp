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
//overloaded << operator: this is a friend class because it is a part of the iostream library and needs access to RECTANGULARCUBE'S private functions
ostream& operator<<(ostream& stream, RectangularCube& rectangle) {
	stream << "Dimensions for this Rectangle:\n";
	stream << "Length: " << rectangle.length << endl;
	stream << "Width: " << rectangle.width << endl;
	stream << "Height: " << rectangle.height << endl;
	stream << "Volume: " << rectangle.CalVolume() << endl;
	stream << "Surface Area: " << rectangle.CalSurfaceArea() << endl;

	return stream;
}

//overloaded < operator: friend classes allow functions to access private member functions of other classes
bool operator<(RectangularCube& firstRectangle, RectangularCube& secondRectangle) {
	if (firstRectangle.CalVolume() < secondRectangle.CalVolume()) {
		return true;
	}
	else {
		return false;
	}
}
void RectangularCube::GetSides() {
	cout << "Sides: " << endl;
	cout << "Length: " << length << endl;
	cout << "Width: " << width << endl;
	cout << "Height: " << height << endl << endl;
}

//+ operator overloaded: I would define the addition of Cubes to be their dimensions, since the other values are dependent on these.
RectangularCube RectangularCube::operator+(RectangularCube& secondCube) {
	this->width += secondCube.width;
	this->length += secondCube.length;
	this->height += secondCube.height;
	return secondCube;
}

//[] operator overload:

long RectangularCube::operator[](const int& index) {
	if (index == 0) {
		return length;
	}
	else if (index == 1) {
		return width;
	}
	else if (index == 2) {
		return height;
	}
	else {
		cout << "Subscript Error\n";
		exit(0);
	}
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
