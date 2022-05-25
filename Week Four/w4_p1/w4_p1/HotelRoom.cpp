#include "HotelRoom.h"
using namespace std;

HotelRoom::HotelRoom() {
	roomNumber = 0;
	dailyRate = 0.0;
}

HotelRoom::HotelRoom(int roomNumber, double dailyRate) {
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
std::string HotelRoom::toString() {
	//converts the dailyRate to a string, adds relevent text before, and removes excess 0's
	string dailyRateNumber = "\nDaily Rate: ";
	dailyRateNumber.append(to_string(dailyRate));
	dailyRateNumber.erase(18, 4);

	//converts roomNumber to string and adds relevent text
	string roomNumberString = "\nRoom Number: ";
	roomNumberString.append(to_string(roomNumber));
	roomNumberString.append("\n");

	//FinalString	
	string finishedString = "\tHotel Room Info";
	finishedString.append(dailyRateNumber);
	finishedString.append(roomNumberString);
	return finishedString;

}