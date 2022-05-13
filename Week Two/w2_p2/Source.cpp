#include<iostream>
#include "Shape.h"
using namespace std;



void shapeTestFunction() {

	cout << "Creating Shape One: \n";
	Shape s1(2);
	s1.addCircle(1.30);
	s1.addCircle(1.50);
	s1.print();

	cout << "Creating Shape Two: \n";
	Shape s2(4);
	s2.addCircle(2.0);
	s2.addCircle(3.0);
	s2.addCircle(4.0);
	s2.print();

	cout << "Creating Shape Three: \n";

	Shape s3 = s2;
	s3.print();

	cout << "Adding new Circle to S2 and printing: \n";
	s2.addCircle(6.0);

	s2.print();

	cout << "Reprinting S3: \n";
	s3.print();
}

int main() {
	shapeTestFunction();

	return 0;
}