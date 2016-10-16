// Programming Challenges page 220 No 4
// Areas of Rectangles

#include <iostream>

using namespace std;

int main(){
	int firstLength, secondLength;
	int firstWidth, secondWidth;
	int area1, area2;
	
	cout << "Rectangle 1 :" << endl << "Enter the length and the width : ";
	cin >> firstLength >> firstWidth;
	cout << "Rectangle 2 :" << endl << "Enter the length and the width : ";
	cin >> secondLength >> secondWidth;
	
	area1 = firstLength * firstWidth;
	area2 = secondLength * secondWidth;
	
	if (area1 > area2){
		cout << endl <<"The first rectangle have greater area than the second rectangle.";
	}
	else if (area2 > area1){
		cout << endl << "The second rectangle have greater area than the first rectangle.";
	}
	else if (area1 == area2){
		cout << endl << "Both areas are the same.";
	}
	return 0;
}
