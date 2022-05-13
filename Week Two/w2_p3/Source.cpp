#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<double> testVec) {
	for (int i = 0; i < testVec.size(); ++i) {
		cout << testVec.at(i) << " ";
	}
	cout << endl;
}

vector<double> rowSum(vector<vector<double>>& nestedVector) {
	vector<double> currVec;
	for (int i = 0; i < nestedVector.size(); ++i) {
		int tempNum = 0;
		for (int j = 0; j < nestedVector[i].size(); ++j) {
			
			tempNum += nestedVector[i][j];
		}
		currVec.push_back(tempNum);
	}
	return currVec;
}

//FIXME: PRINT NESTED VECTOR FUNCTION


int main() {
	vector<vector<double>> nestedVector{
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15},
		{16, 17, 18, 19, 20},
		{21, 22, 23, 24, 25}
			};
	vector<double> newVec = rowSum(nestedVector);

	printVector(newVec);
}