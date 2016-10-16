// Programming Challenges page 222 No 13 
// Book Club Points

#include <iostream>

using namespace std;

int main(){
	int books;
	
	cout << "The number of books you puchased this month : ";
	cin >> books;
	
	if (books == 0){
		cout << "You earns 0 point.";
	}
	else if (books == 1){
		cout << "You earns 5 points.";
	}
	else if (books == 2){
		cout << "You earns 15 points.";
	}
	else if (books == 3){
		cout << "You earns 30 points.";
	}
	else if (books >= 4){
		cout << "You earns 60 points.";
	}
	else {
		cout << "Number of books can't be minus.";
	}
	return 0;
}
