// Programming Challenges page 220 No 5
// Body Mass Index

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float bodyMass;
	float weight;
	float height;
	
	cout << "Enter your weight in pounds : ";
	cin >> weight;
	cout << "Enter your height in inches : ";
	cin >> height;
	
	bodyMass = weight * 703 / pow(height, 2);
	
	if(bodyMass >= 18.5 && bodyMass <=25){
		cout << endl << "Your weight is considered to be optimal.";
	}
	else if(bodyMass < 18.5){
		cout << endl << "You are considered to be underweight.";
	}
	else if(bodyMass > 25){
		cout << endl << "You are considered to be overweight.";
	}
	return 0;
}
