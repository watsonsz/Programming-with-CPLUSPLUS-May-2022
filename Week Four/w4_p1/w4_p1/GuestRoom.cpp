#include "GuestRoom.h"
//#include <exception>
using namespace std;
GuestRoom::GuestRoom(): HotelRoom(){
	capacity = 0;
	days = 0;
	status = 0;
}

GuestRoom::GuestRoom(double dailyRate, int roomNumber, int capacity, int status, int days): HotelRoom() {
	setDaily(dailyRate);
	setRoomNumber(roomNumber);
	//exception handling
	if (status > capacity) {
		throw out_of_range("Maximum Capacity Exceeded");
	}
	this->capacity = capacity;
	this->status = status;
	this->days = days;
}

void GuestRoom::setCapacity(int capacity) {
	this->capacity = capacity;
}

void GuestRoom::setStatus(int status) {
	if (status > capacity) {
		throw out_of_range("Maximum Capacity Exceeded");
	}
	this->status = status;

}

void GuestRoom::setDays(int days) {
	this->days = days;
}

double GuestRoom::calculateBill() {
	double dailyCost = getDailyRate();
	double total = dailyCost * days;

	return total;
}

std::string GuestRoom::toString() {
	//setup string chaining and get capacity situated.
	string startingString = "\tGuest Room (capacity: ";
	startingString.append(to_string(capacity));
	startingString.append(")\n");

	//Append Room Number
	startingString.append("Room Number: ");
	startingString.append(to_string(getRoomNumber()));
	startingString.append("\n");


	//append status
	startingString.append("# of Guests: ");
	startingString.append(to_string(status));
	startingString.append("\n");

	//append days
	startingString.append("# of days: ");
	startingString.append(to_string(days));
	startingString.append("\n");

	//create, format and append total
	string totalString = to_string(calculateBill());
	totalString.erase(6, 4);

	startingString.append("Total: ");
	startingString.append(totalString);

	return startingString;


}

