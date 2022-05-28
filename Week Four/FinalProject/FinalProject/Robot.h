#ifndef ROBOT_H
#define ROBOT_H

#include "global.h"
#include <iostream>
class Robot
{
private:
	int xLocation;
	int yLocation;
	bool cargoBed;
	char load;


public:
	Robot();
	Robot(int xLocation, int yLocation, bool cargoBed, char load);
	void setX(int x);
	void setY(int y);
	int getX();
	int getY();
	void setCargo();
	bool getCargo();
	void setLoad(char I);
	char getLoad();
	bool moveTo(int lX, int lY);
	bool pickup(int lX, int lY);
	bool dropoff(int lX, int lY);
	void printRobot();
};

#endif // !ROBOT_H
