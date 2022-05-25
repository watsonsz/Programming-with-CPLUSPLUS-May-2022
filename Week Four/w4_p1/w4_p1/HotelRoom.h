#pragma once
#include <iostream>
#include <string>
#include <stdexcept>
class HotelRoom
{private:
	int roomNumber;
	double dailyRate;

public:
	HotelRoom();
	HotelRoom(int roomNumber, double dailyRate);
	void setRoomNumber(int roomNumber);
	void setDaily(double dailyRate);
	int getRoomNumber();
	double getDailyRate();
	std::string toString();
};

