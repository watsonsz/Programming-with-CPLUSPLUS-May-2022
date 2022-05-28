#pragma once
#include "HotelRoom.h"
class MeetingRoom: public HotelRoom
{private:
	int seats;
	int status;
public:
	MeetingRoom();
	MeetingRoom(int roomNumber, double dailyRate, int seats, int status);
	void setSeats(int seats);
	void setStatus(int status);
	inline int getSeats() { return seats; }
	inline int getStatus() { return status; }
	double calculateBill();
	std::string toString();
};

