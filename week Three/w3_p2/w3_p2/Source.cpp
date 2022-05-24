#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void SelectionSort(vector<string>& memberID, vector<string>& lastNames, vector<string>& firstNames, vector<int>& points) {
	for (int i = memberID.size()-1; i >= 1; i--) {
		int currentMax = 0;
		for (int j = 1; j <= i; j++){
			string memberIdAtJ = memberID.at(j);
			string memberIdAtMin = memberID.at(currentMax);
  
			if (memberIdAtJ > memberIdAtMin) {
				memberIdAtMin = memberIdAtJ;
				currentMax = j;

			}

			if (currentMax != i){
				string tempID = memberID.at(currentMax);
				string tempLastName = lastNames.at(currentMax);
				string tempFirstName = firstNames.at(currentMax);
				int tempPoints = points.at(currentMax);
				
				memberID.at(currentMax) = memberID.at(i);
				lastNames.at(currentMax) = lastNames.at(i);
				firstNames.at(currentMax) = firstNames.at(i);
				points.at(currentMax) = points.at(i);
				
				memberID.at(i) = tempID;
				lastNames.at(i) = tempLastName;
				firstNames.at(i) = tempFirstName;
				points.at(i) = tempPoints;


			
			}
		}
	}
}

void print(vector<string>& memberID, vector<string>& lastNames, vector<string>& firstNames, vector<int>& points) {
	for (int i = 0; i < memberID.size(); ++i) {
		cout << memberID.at(i) << " " << lastNames.at(i) << " " << firstNames.at(i) << " " << points.at(i) << endl << endl;
	}
}

void phaseB(vector<string>& memberID, vector<string>& lastNames, vector<string>& firstNames, vector<int>& points) {
	string userChoice;
	cout << "Enter a MemberID to Check/Edit: (type e to quit):";
	cin >> userChoice;

	while (userChoice != "e") {

		string currID;
		string currLastName;
		string currFirstName;
		int currPoints = 0;
		bool memberFound = false;

		for (int i = 0; i < memberID.size(); ++i) {
			//if userchoice matches, read the values into local variables and break the for loop
			if (userChoice == memberID.at(i)) {
				currID = memberID.at(i);
				currLastName = lastNames.at(i);
				currFirstName = firstNames.at(i);
				currPoints = points.at(i);
				memberFound = true;
				break;
			}
		}
		if (!memberFound) {
			cout << "Member not found.\n";
			cin >> userChoice;
			continue;
		}

		//user is Found, add or subract points
		int pointAmount;
		cout << currID << " " << currLastName << " " << currFirstName << " " << endl;
		cout << "Add or Subtract points from " << currLastName << ", " << currFirstName << endl;
		cout << "Current Points: " << currPoints << endl;
		cin >> pointAmount;

		currPoints += pointAmount;

		/*this for loop re-reads the temp variables back into their spot in the vector.
		it is intentional to re-do a for loop, rather than save the value of i and re-use it to reduce the potential for
		programmer error*/

		for (int i = 0; i < memberID.size(); ++i) {
			if (currID == memberID.at(i)) {
				lastNames.at(i) = currLastName;
				firstNames.at(i) = currFirstName;
				points.at(i) = currPoints;
				memberFound = false;
				break;
			}

		}

		cout << "Enter a MemberID to Check/Edit: (type e to quit):";
		cin >> userChoice;

	}
}

int main() {
	ifstream input;
	ofstream output;
	vector<string> memberID;
	vector<string> lastNames;
	vector<string> firstNames;
	vector<int> points;

	//check for file
	input.open("csc252hw3in.txt");

	if (input.fail()) {
		cout << "File does not exist.\n";
		cout << "Exiting File.";
		return 0;
	}

	//read data into temp variables and read them into the vectors
	while (!input.eof()) {
		string tempID;
		string tempLastName;
		string tempFirstName;
		int tempPoints;
		input >> tempID >> tempLastName >> tempFirstName >> tempPoints;

 		memberID.push_back(tempID);
		lastNames.push_back(tempLastName);
		firstNames.push_back(tempFirstName);
		points.push_back(tempPoints);
	}
	input.close();

	//print records as they appear in the file
	print(memberID, lastNames, firstNames, points);

	//sort files
	SelectionSort(memberID, lastNames, firstNames, points);

	cout << "Sorting Files\n\n";

	//print in new order
	print(memberID, lastNames, firstNames, points);

	//initiate Member search
	phaseB(memberID, lastNames, firstNames, points);

	//print Changed files to new file

	output.open("csc252hw3out.txt");
	for (int i = 0; i < memberID.size(); ++i) {
		output << memberID.at(i) << " " << lastNames.at(i) << " " << firstNames.at(i) << " " << points.at(i) << endl;
	}
	output.close();
	cout << "Updating of records done and the new file is: csc252hw3out.txt\n";



	
	return 0;
}
