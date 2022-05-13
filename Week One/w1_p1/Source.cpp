#include <iostream>
#include <array>
using namespace std;

class Grid {
private: 
	int gameBoard[10][10];

public:
	Grid() {
		for (int i = 0; i < 10; ++i) {
			for (int j = 0; j < 10; ++j) {
				gameBoard[i][j] = 0;
			}
		}
	}

	int GetInteger(int row, int column) {
		return gameBoard[row][column];
	}
	void SetInteger(int row, int column, int value) {
		gameBoard[row][column] = value;
	}

};

int main() {
	Grid problemGrid;
	
	cout << problemGrid.GetInteger(3, 5) << endl;
	problemGrid.SetInteger(3, 5, 100);
	cout << problemGrid.GetInteger(3, 5) << endl;

	return 0;
}