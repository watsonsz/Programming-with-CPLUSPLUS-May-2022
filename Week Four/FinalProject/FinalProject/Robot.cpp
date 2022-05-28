#include "Robot.h"
using namespace std;

Robot::Robot() {
	xLocation = 0;
	yLocation = 0;
	cargoBed = false;
	load = '.';
}

Robot::Robot(int xLocation, int yLocation, bool cargoBed, char load) {
	this->xLocation = xLocation;
	this->yLocation = yLocation;
	this->cargoBed = cargoBed;
	this->load = load;
}

void Robot::setX(int x) {
	xLocation = x;
}

void Robot::setY(int y) {
	yLocation = y;

}

int Robot::getX() {
	return xLocation;
}

int Robot::getY() {
	return yLocation;
}

void Robot::setCargo() {
	if (load != '.') {
		cargoBed = true;
	}
	else {
		cargoBed = false;
	}
}

bool Robot::getCargo() {
	return cargoBed;
}

void Robot::setLoad(char I) {
	load = I;
	setCargo();
}

char Robot::getLoad() {
	return load;
}

bool Robot::moveTo(int lX, int lY) {
	if (lX > grid.size() - 1 || lX < 0) {
		return false;
	}
	else if (lY > grid[0].size() - 1 || lY < 0) {
		return false;
	}
	else {
		//Shifting along the x plane
		while (xLocation != lX) {
			//REMOVE COUTS
			cout << "Robot has moved from X: " << xLocation;
			if (xLocation < lX) {
				++xLocation;
			}
			if (xLocation > lX) {
				--xLocation;
			}
			//REMOVE COUTS
			cout << " to X: " << xLocation << endl;

		}

		cout << endl;
		//Shifting along the Y plane
		while (yLocation != lY) {
			//REMOVE COUTS
			cout << "Robot has moved from Y: " << yLocation;
			if (yLocation < lY) {
				++yLocation;
			}
			if (yLocation > lY) {
				--yLocation;
			}
			//REMOVE COUTS
			cout << " to Y: " << yLocation << endl;

		}
		cout << endl;

		return true;
	}
}

bool Robot::pickup(int lX, int lY) { 
	if ((grid[lX].at(lY) == '.') || (cargoBed == true)) {
		return false;
	}
	else {
		moveTo(lX, lY);
		setLoad(grid[lX].at(lY));
		grid[lX].at(lY) = '.';
			return true;
	}
	 
}
bool Robot::dropoff(int lX, int lY) { 
	if ((grid[lX].at(lY) != '.') || (cargoBed == false)) {
		return false;
	}
	else {
		moveTo(lX, lY);
		grid[lX].at(lY) = load;
		setLoad('.');
		return true;

	}
	
}

void Robot::printRobot() {
	cout << "Robot is currently at (" << xLocation << ", " << yLocation << ")\n";
	cout << "Cargo bed is " << getCargo() << endl;
	cout << "load is " << getLoad() << endl;
}
