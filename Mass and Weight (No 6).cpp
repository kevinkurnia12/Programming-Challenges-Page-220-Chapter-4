// Programming Challenges page 220 No 6
// Mass and Weight 

#include <iostream>

using namespace std;

void display (float);

int main(){
	int mass;
	float weight;
	
	cout << "Enter an object's mass in kilogram : ";
	cin >> mass;
	
	weight = mass * 9.8;
	
	display(weight);
	
	return 0;
}

void display (float weightX){
	if (weightX > 1000){
		cout << endl << "The object is too heavy.";
	}
	else if (weightX < 10){
		cout << endl << "The object is too light.";
	}
	else {
		cout << endl << "The Weight is " << weightX;
	}
}
