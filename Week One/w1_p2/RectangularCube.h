#ifndef _RECTANGULARCUBE_

#define _RECTANGULARCUBE_

#include <iostream>
#include <string>
#include <cmath>
using namespace std;


class RectangularCube {
private:
	int length;
	int width;
	int height;
	string name = "Unnamed Cube";

public:
	RectangularCube();

	RectangularCube(int length, int width, int height);

	inline void SetName(string name) {
		this->name = name;
	};
	inline string GetName() {
		return name;
	};

	void GetSides();

	void SetSides(int length, int width, int height);

	int CalSurfaceArea();

	int CalVolume();
};

#endif // _RECTANGULARCUBE_