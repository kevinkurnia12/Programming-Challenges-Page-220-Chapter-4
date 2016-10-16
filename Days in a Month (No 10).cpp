// Programming Challenges page 220 No 10
// Days in a Month

#include <iostream>

using namespace std;

int main(){
	int inputMonth;
	int inputYear;
	
	cout << "Enter the month in integer between 1 - 12 : ";
	cin >> inputMonth;
	cout << "Enter a year : ";
	cin >> inputYear;
	
	if (inputYear % 100 == 0 && inputYear % 400 == 0 || inputYear % 100 != 0 && inputYear % 4 == 0){
		if (inputMonth == 2){
			cout << endl << "29 days";
		}
		else if (inputMonth == 1 || inputMonth == 3 || inputMonth == 5 || inputMonth == 7 || inputMonth == 8 || inputMonth == 10 || inputMonth == 12){
			cout << endl << "31 days";
		}
		else if (inputMonth < 1 || inputMonth > 12){
			cout << endl << "You enter the wrong month!";
		}
		else {
			cout << endl << "30 days";
		}
	}
	else {
		if (inputMonth == 2){
			cout << endl << "28 days";
		}
		else if (inputMonth == 1 || inputMonth == 3 || inputMonth == 5 || inputMonth == 7 || inputMonth == 8 || inputMonth == 10 || inputMonth == 12){
			cout << endl << "31 days";
		}
		else if (inputMonth < 1 || inputMonth > 12){
			cout << endl << "You enter the wrong month!";
		}
		else {
			cout << endl << "30 days";
		}
	}
	
	return 0;
}
