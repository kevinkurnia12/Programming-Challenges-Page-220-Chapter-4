// Programming Challenges page 220
// Minimum / Maximum

#include <iostream>

using namespace std;

int main(){
	int num1;
	int num2;
	
	cout << "Enter the first number : ";
	cin >> num1;
	cout << "Enter the second number : ";
	cin >> num2;
	
	if(num1 > num2){
		cout << endl << "The larger number is " << num1 << " and the smaller number is " << num2;
	}
	else if (num2 > num1){
		cout << endl << "The larger number is " << num2 << " and the smaller number is " << num1;
	}
	return 0;
}
