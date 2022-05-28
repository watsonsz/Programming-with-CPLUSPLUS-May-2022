#include "Robot.h"
#include <stdexcept>
using namespace std;

void initializeGrid() {
	for (int i = 0; i < grid.size(); ++i) {
		for (int j = 0; j < grid.size(); ++j) {
			grid[i].push_back('.');
		}
	}
}

void print2D() {
	for (int i = 0; i < grid.size(); ++i) {
		for (int j = 0; j < grid[i].size(); ++j) {
			cout << grid[i].at(j);
		}
		cout << endl;
	}
}

void clear() {

}

int main() {
	initializeGrid();
	grid[3].at(8) = 'B';
	grid[2].at(6) = 'C';
	print2D();
	Robot R1(rand() % 10, rand() % 10, false, '.');
	Robot R2(rand() % 10, rand() % 10, false, '.');
	//FIXME: OVERLOADED OPERATOR TO USE THE FOLLOWING FUNCTIONS:
	// cout << R1;
	// cout << R2;

	R1.moveTo(9, 2);
	R2.moveTo(3, 4);
	// cout << R1;
	// cout << R2;
	//print2D();

	R1.pickup(3, 8);
	R1.dropoff(9, 9);
	// cout << R1;
	// cout << R2;
	//print2D();

	R2.pickup(2, 6);
	R2.dropoff(0, 0);
	// cout << R1;
	// cout << R2;
	print2D();


	return 0;
}