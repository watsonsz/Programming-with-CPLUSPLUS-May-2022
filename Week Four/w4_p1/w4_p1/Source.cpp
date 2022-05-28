#include "HotelRoom.h"
#include "GuestRoom.h"
#include "MeetingRoom.h"
#include <iomanip>

using namespace std;

void displayHotelRoom(HotelRoom &room) {
	cout << room.toString();
	cout << fixed << setprecision(2);
	cout << room.calculateBill() << endl;
}


int main() {
	
	try {
		//creating a HotelRoom object now yeilds compiler error
		GuestRoom zacksBed(83, 157, 5, 1, 5);
		MeetingRoom zacksConvention(01, 500.00, 10, 1);

		cout << endl << endl << endl;
	
		displayHotelRoom(zacksBed);
		displayHotelRoom(zacksConvention);
		
		
	}
	catch (exception& e) {
		cout << "Exception: " << e.what() << endl;
		cout << "Exception Type: " << typeid(e).name() << endl;
	}

	


	return 0;
}