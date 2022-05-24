#include <iostream>
#include "RectangularCube.h"
using namespace std;



int main() {
	RectangularCube r1(2,3,4);
	RectangularCube r2;

	//Testing stream overload
	cout << r1 << endl;
	cout << r2 << endl;

	//testing < operator
	if (r2 < r1) {
		cout << "True\n";
	}
	else {
		cout << "False\n";
	}

	//testing + operator

	r1 + r2;
	cout << r1;

	//testing [] operatior
	cout << r1[0] << endl;
	cout << r1[1] << endl;
	cout << r1[2] << endl;

	return 0;
}