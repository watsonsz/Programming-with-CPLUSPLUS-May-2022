#pragma once
#include "HotelRoom.h"
class GuestRoom: public HotelRoom
{private:
	int capacity;
	int status;
	int days;

public:
	GuestRoom();
	GuestRoom(int roomNumber, double dailyRate, int capacity, int status, int days);
	void setCapacity(int capacity);
	void setStatus(int status);
	void setDays(int days);
	inline int getCapacity() { return capacity; }
	inline int getStatus() { return status; }
	inline int getDays() { return days; }
	double calculateBill();
	std::string toString();




};

