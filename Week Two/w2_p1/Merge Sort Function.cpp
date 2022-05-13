#include <iostream>
#include <array>
using namespace std;

int * mergeArrays(int * setOne, int size1, int * setTwo, int size2) {
	int* newArray = new int[8];
	int current1 = 0;
	int current2 = 0;
	int current3 = 0;

	while (current1 < size1 && current2 < size2) {
		if (setOne[current1] < setTwo[current2]) {
			newArray[current3++] = setOne[current1++];
		}
		else {
			newArray[current3++] = setTwo[current2++];
		}
	}
	while (current1 < size1) {
		newArray[current3++] = setOne[current1++];
	}
	while (current2 < size2) {
		newArray[current3++] = setTwo[current2++];
	}

	return newArray;
}


int main() {
	int setOne[] = { 1,3,5,7 };
	int setTwo[]={2,4,6,8};

	cout << "Set One Array Values: ";
	for (int i = 0; i < 4; ++i) {
		cout << setOne[i] << " ";
	}

	cout << "\nSet Two Array Values: ";
	for (int i = 0; i < 4; ++i) {
		cout << setTwo[i] << " ";
	}
	int * setthree = mergeArrays(setOne, 4, setTwo, 4);

	cout << "\nNew Array Values: ";
	for (int i = 0; i < 8; ++i) {
		cout << setthree[i] << " ";
	}
	return 0;

}