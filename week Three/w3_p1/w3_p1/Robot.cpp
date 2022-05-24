#include "Robot.h"
#include <iostream>
Robot::Robot() {
	xLocation = 0;
	yLocation = 0;
	cargoBed = false;
	load = '0';
}

void Robot::setX(int x) {

	
	while (xLocation != x) {
		cout << "Robot has moved from X: " << xLocation;
		if (xLocation < x) {
			++xLocation;
		}
		if (xLocation > x) {
			--xLocation;
		}

		cout << " to X: " << xLocation << endl;

	}
	
	cout << endl;
}

void Robot::setY(int y) {


	while (yLocation != y) {
		cout << "Robot has moved from Y: " << yLocation;
		if (yLocation < y) {
			++yLocation;
		}
		if (yLocation > y) {
			--yLocation;
		}

		cout << " to Y: " << yLocation << endl;

	}
	cout << endl;

}

int Robot::getX() {
	return xLocation;
}

int Robot::getY() {
	return yLocation;
}


//FIXME:: not sure this will work
void Robot::setCargo(bool b){
	cargoBed = b;
}

bool Robot::getCargo() {
	return cargoBed;
}

void Robot::setLoad(char I) {
	load = I;
	bool b = true;
	setCargo(b);
}

char Robot::getLoad() {
	return load;
}

bool Robot::moveTo(int x, int y) {
	setX(x);
	setY(y);

	return true;
}

void Robot::printRobot() {
	cout << "Robot is currently at (" << xLocation << ", " << yLocation << ")\n";
	cout << "Cargo bed is " << getCargo() << endl;
	cout << "load is " << getLoad() << endl;
}
