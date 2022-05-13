#include <iostream>
#include <string>
#include <array>
#include "RectangularCube.h"

using namespace std;


//print Cube function
void printCube(RectangularCube rc) {
	rc.GetSides();
	cout << ", V = " << rc.CalVolume() << ", A = " << rc.CalSurfaceArea() << endl;
}
int main() {
	//initialize Array and SetSides to random 1-10 with no-arg SetSides function
	RectangularCube objectArray[5];
	for (int i = 0; i < 5; ++i) {
		objectArray[i].SetSides();
	}

	//Print Each Array

	for (int i = 0; i < 5; ++i) {
		cout << i + 1 << ": ";
		printCube(objectArray[i]);
	}


	return 0;
}