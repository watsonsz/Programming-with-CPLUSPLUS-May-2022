#include <iostream>
#include <array>
#include <string>
#include <cmath>
using namespace std;

template <typename T>
int binarySearch(T list[], T key, int listSize) {
    int low = 0;
    int high = listSize - 1;

    while (high >= low)
    {
        int mid = (low + high) / 2;
        if (key < list[mid])
            high = mid - 1;
        else if (key == list[mid])
            return mid;
        else
            low = mid + 1;
    }

    return -low - 1;
}

int main() {
    int list1[] = { 1,2,3,4,5 };
    //should return 1
    cout << binarySearch(list1, 2, 5)<< endl;
     
    
    //should return 4
    double list2[] = { 1.5,2.5,3.5,4.5,5.5 };
    cout << binarySearch(list2, 5.5, 5) << endl;

    //should return 2
    string list3[] = { "Kiara", "Lisa", "Hope", "Nani", "Danni" };
    string keyString = "Hope";
    cout << binarySearch(list3, keyString, 5) << endl;
}