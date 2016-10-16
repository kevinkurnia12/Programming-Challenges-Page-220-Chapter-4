// Programming Challenges page 220 no 3
// Magic Dates

#include <iostream>

using namespace std;

void output (int months, int days, int years);

int main(){
	int month;
	int day;
	int year;
	
	cout << "Enter the month : ";
	cin >> month;
	cout << "Enter the day   : ";
	cin >> day;
	cout << "Enter the two-digit year  : ";
	cin >> year;
	output (month, day, year);
	
	return 0;
}

void output (int months, int days, int years){
	
	if (months * days == years){
		cout << endl << "The date is magic!!";
	}
	else {
		cout << endl << "The date is not magic.";
	}
}
