using namespace std;
class Robot
{private:
	int xLocation;
	int yLocation;
	bool cargoBed;
	char load;


public:
	Robot();
	void setX(int x);
	void setY(int y);
	int getX();
	int getY();
	void setCargo(bool b);
	bool getCargo();
	void setLoad(char I);
	char getLoad();
	bool moveTo(int x, int y);
	void printRobot();
};

