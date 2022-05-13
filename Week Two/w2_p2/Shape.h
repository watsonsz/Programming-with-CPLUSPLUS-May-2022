#pragma once
#include <iostream>
#include "Circle.h"
using namespace std;

class Shape
{private:
	Circle * circles;
	int numberOfCircles;
	int capacity;

public:
	Shape(int capacity);
	~Shape();
	void addCircle(Circle c);
	Circle* const getCircles();
	int const getNumberofCircles();
	Shape(Shape& RHS);
	void const print();

};

