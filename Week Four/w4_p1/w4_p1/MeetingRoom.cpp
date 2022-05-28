#include "MeetingRoom.h"
using namespace std;
MeetingRoom::MeetingRoom() : HotelRoom() {
	cout << "MeetingRoom initialized with no-arg constructor...\n";
	seats = 0;
	status = 0;
}

MeetingRoom::MeetingRoom(int roomNumber, double dailyRate, int seats, int status) : HotelRoom(roomNumber, dailyRate) {
	cout << "MeetingRoom initialized with constructor containing arguments...\n";
	if (status < 0 || status > 1) {
		throw invalid_argument("Invalid Value used");
	}
	
	this->seats = seats;
	this->status = status;
}

void MeetingRoom::setSeats(int seats) {
	this->seats = seats;
}

void MeetingRoom::setStatus(int status) {	
	if (status < 0 || status > 1) {
		throw invalid_argument("Invalid Value used");
	}
	this->status = status;
}

double MeetingRoom::calculateBill() {
	return (seats * 10.00) + 500.00;
}

std::string MeetingRoom::toString() {
	//initialized string and place header
	string finalString = "\t Meeting Room\n";

	//RoomNumber
	finalString.append("Room Number: ");
	finalString.append(to_string(getRoomNumber()));
	finalString.append("\n");

	//# of seats
	finalString.append("# of Guests: ");
	finalString.append(to_string(seats));
	finalString.append("\n");

	//Total Price
	finalString.append("Total Price: $");
	string totalString = to_string(MeetingRoom::calculateBill());
	totalString.erase(6, 4);
	finalString.append(totalString);
	finalString.append("\n");

	//status
	finalString.append("Status: ");
	if (status == 0) {
		finalString.append("Not Booked\n");
	}
	else {
		finalString.append("Booked\n");
	}

	return finalString;

	
}