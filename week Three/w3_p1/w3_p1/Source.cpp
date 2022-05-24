#include "Robot.h"
#include <iostream>
#include <vector>
using namespace std;



int main() {
	vector<Robot> roboArray(3);
	roboArray.at(0).moveTo(3, 4);
	roboArray.at(1).moveTo(5, 5);
	roboArray.at(2).moveTo(2, 4);

	roboArray.at(0).setLoad('z');
	roboArray.at(1).setLoad('g');
	roboArray.at(2).setLoad('K');

	for (int i = 0; i < roboArray.size(); ++i) {
		roboArray.at(i).printRobot();
	}

	return 0;
}