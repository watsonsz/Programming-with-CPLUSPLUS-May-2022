#include "HotelRoom.h"
#include "GuestRoom.h"
#include <iomanip>

using namespace std;


int main() {
	
	try {
		//Base Class Testing
		cout << "Base Class Testing\n\n";
		HotelRoom zacksHotelRoom(82, 167.5);
		cout << zacksHotelRoom.toString() << endl;

		cout << "Changing Daily Rate: \n";
		zacksHotelRoom.setDaily(100.00);
		cout << "New Daily Rate: " << zacksHotelRoom.getDailyRate() << endl << endl;

		//Derived Class Testing: Guest Room
		cout << "Derived Class Testing\n";
		GuestRoom zacksGuestRoom(127.50, 64, 5, 1, 5);	
		cout << zacksGuestRoom.toString() << endl;
		cout << fixed << setprecision(2);
		cout << zacksGuestRoom.calculateBill() << endl << endl;
		
	}
	catch (exception& e) {
		cout << "Exception: " << e.what() << endl;
		cout << "Exception Type: " << typeid(e).name() << endl;
	}

	


	return 0;
}