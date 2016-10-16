// Programming Challenges page 220 No 9
// Change for a Dollar Game

#include <iostream>

using namespace std;

int main(){
	int dollar;
	int penny;
	int nickel;
	int dime;
	int quarter;
	int inputPenny;
	int inputNickel;
	int inputDime;
	int inputQuarter;
	int allCoins;
	
	cout << "\tChange for a Dollar Game";
	cout << endl << endl << "In this game you should enter the amount of coins required to make exactly one dollar.";
	getchar();
	cout << endl << endl << "Number of pennies : ";
	cin >> inputPenny;
	cout << "Number of nickels : ";
	cin >> inputNickel;
	cout << "Number of dimes   : ";
	cin >> inputDime;
	cout << "Number of quarter : ";
	cin >> inputQuarter;
	
	penny = inputPenny * 1;
	nickel = inputNickel * 5;
	dime = inputDime * 10;
	quarter = inputQuarter * 25;
	dollar = 100;
	allCoins = penny + nickel + dime + quarter;
	
	if (allCoins == dollar){
		cout << endl << "Congratulations!! You have won!!!";
	}
	else if (allCoins > dollar){
		cout << endl << "You have lost! The amount of the coins more than one dollar!";
	}
	else if (allCoins < dollar){
		cout << endl << "You have lost! The amount of the coins less than one dollar!";
	}
	getchar();
	getchar();
	return 0;
}
