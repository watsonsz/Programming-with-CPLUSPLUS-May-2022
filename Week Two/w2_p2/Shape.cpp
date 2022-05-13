#include "Shape.h"
using namespace std;

Shape::Shape(int capacity) {
	this->capacity = capacity;
	numberOfCircles = 0;
	circles = new Circle[capacity];
}


//Destructor
Shape::~Shape() {
	if (circles != NULL) {
		circles = NULL;
		delete[] circles;
	}
}


//Copy Constructer
Shape::Shape(Shape& RHS) {	
	cout << "Copy Constructor executing\n";
	numberOfCircles = RHS.numberOfCircles;
	capacity = RHS.capacity;
	circles = new Circle[capacity];
	for (int i = 0; i < numberOfCircles; ++i) {
		circles[i] = RHS.circles[i];
	}
}

void Shape::addCircle(Circle c) {
	if (numberOfCircles >= capacity) {
		cout << "Maximum capacity of Circles Reached\n";
		cout << "Exiting Program";
		exit(0);
	}

	circles[numberOfCircles] = c;
	numberOfCircles++;
}

int const Shape::getNumberofCircles() {
	return numberOfCircles;
}

Circle* const Shape::getCircles() {
	return circles;
}

void const Shape::print() {
	for (int i = 0; i < numberOfCircles; ++i) {
		Circle currCircle = circles[i];
		cout << i + 1 << ": ";
		currCircle.print();
		cout << endl;

	}

	cout << endl;
}