#include <iostream>
#include <string>
#include <vector>
using namespace std;

class A {
public:
	A();
	double getNumber();

private: 
	double number;
};

A::A() {

	number = 1;
}

double A::getNumber() {
	return number;
}

void printA(A& a) {
	cout << "The numberr is " << a.getNumber() << endl;
}

int main() {
	/*string str_a = "ABCDE";
	string str_b = "XYZUV";
	string str_c = "TAMU";
	string* ptr1 = NULL;
	string* ptr2 = &str_b;
	ptr1 = &str_a;
	ptr1 = &str_c;
	cout << *ptr1 << endl;
	cout << ptr1 << endl;
	cout << *ptr2 << endl;
	cout << ptr2 << endl;*/

	vector<int> values(10);
	int i = 0;
	int vsize = 10;

	for (i = 0; i < vsize; i = i + 3) {
		values.pop_back();
	}

	cout << "Size of values:" << values.size();

	return 0;
}