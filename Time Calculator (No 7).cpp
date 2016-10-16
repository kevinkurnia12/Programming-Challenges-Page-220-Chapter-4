// Programming Challenges page 221 No 7
// Time Calculator

#include <iostream>

using namespace std;

int main(){
	float userInputSeconds;
	float minute;
	float hour;
	float day;
	
	cout << "Enter any number of seconds : ";
	cin >> userInputSeconds;
	
	minute = userInputSeconds / 60; 
	hour = userInputSeconds / 3600;
	day = userInputSeconds / 86400;
	
	if ( userInputSeconds > 60 && userInputSeconds < 3600 || userInputSeconds == 60 && userInputSeconds < 3600){
		cout << endl << "The number of minutes : " << minute << " minutes.";
	}
	else if ( userInputSeconds > 3600 && userInputSeconds < 86400 || userInputSeconds == 3600 && userInputSeconds < 86400 ){
		cout << endl << "The number of hours : " << hour << " hours.";
	}
	else if ( userInputSeconds > 86400 || userInputSeconds == 86400 ){
		cout << endl << "The number of days : " << day << " days.";
	}
	else {
		cout << endl << "The number of seconds : " << userInputSeconds << " seconds";
	}
	return 0;
}
