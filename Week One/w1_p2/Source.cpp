#include <iostream>
#include <string>
#include "RectangularCube.h"
using namespace std;

void TestTheCubes() {
	//inititalize Cubes and set their names:
	RectangularCube baseCube;
	RectangularCube testCube(5, 6, 10);
	baseCube.SetName("Base Cube");
	testCube.SetName("Test Cube");

	//Calculate Surface Area and Volume of each Cube:
	cout << "Surface Area of " << baseCube.GetName() << " is: " << baseCube.CalSurfaceArea() << endl;
	cout << "Volume of " << baseCube.GetName() << " is: " << baseCube.CalVolume() << endl << endl;

	cout << "Surface Area of " << testCube.GetName() << " is: " << testCube.CalSurfaceArea() << endl;
	cout << "Volume of " << testCube.GetName() << " is: " << testCube.CalVolume() << endl << endl;


	//change base cube's width to 5
	baseCube.SetSides(-1, 5, -1);
	cout << "Width of " << baseCube.GetName() << " has been changed!" << endl << endl;

	//new surface area and volume of base cube
	cout << "Surface Area of " << baseCube.GetName() << " is now: " << baseCube.CalSurfaceArea() << endl;
	cout << "Volume of " << baseCube.GetName() << " is now: " << baseCube.CalVolume() << endl << endl;

	//Anonymous object assigned to BaseCube and re-invoke CalSurf and Vol functions:

	baseCube = RectangularCube();

	cout << "Anonymous Object applied to BaseCube." << endl << endl;

	cout << "Surface Area of " << baseCube.GetName() << " is now: " << baseCube.CalSurfaceArea() << endl;
	cout << "Volume of " << baseCube.GetName() << " is now: " << baseCube.CalVolume() << endl;
}

int main() {

	TestTheCubes();

	return 0;
}