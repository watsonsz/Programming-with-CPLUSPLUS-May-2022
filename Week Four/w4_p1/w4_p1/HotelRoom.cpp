#include "HotelRoom.h"
using namespace std;

HotelRoom::HotelRoom() {
	cout << "HotelRoom initialized with no-arg constructor...\n";
	roomNumber = 0;
	dailyRate = 0.0;
}

HotelRoom::HotelRoom(int roomNumber, double dailyRate) {
	cout << "HotelRoom initialized with constructor containing arguments...\n";
	if (dailyRate < 0 || roomNumber < 0) {
		throw invalid_argument("Negative Parameter");
		
	}

	this->dailyRate = dailyRate;
	this->roomNumber = roomNumber;

	
}

void HotelRoom::setRoomNumber(int roomNumber) {
	if (roomNumber < 0) {
		throw invalid_argument("Negative Parameter");

	}
	this->roomNumber = roomNumber;
}
void HotelRoom::setDaily(double dailyRate) {
	if (dailyRate < 0) {
		throw invalid_argument("Negative Parameter");

	}
	this->dailyRate = dailyRate;
}
double HotelRoom::getDailyRate() {
	return dailyRate;
}
int HotelRoom::getRoomNumber() {
	return roomNumber;
}

double HotelRoom::calculateBill() {
	return 0.00;
}
//as HotelRoom is now an abstract class, toString() definition deleted.