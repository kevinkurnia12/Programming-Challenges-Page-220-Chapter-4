// Programming Challenges page 220 no 2
// Roman Numeral Converter

#include <iostream>

using namespace std;

int convertRoman (int);
  
int main(){
	int inputNumber;
	
	cout << "Enter a number within the range of 1 through 10 : ";
	cin >> inputNumber;
	
	if (inputNumber < 1 || inputNumber > 10){
		cout << endl << "Do not accept number less than 1 or greater than 10.";
	}
	else if (1 >= inputNumber || inputNumber <=10){
	cout << endl;
	convertRoman (inputNumber);
	}
}

int convertRoman (int x){
	switch (x) 
	{
		case 1 :
		cout << "Roman numeral version of the number is I";
		break;
		case 2 :
		cout << "Roman numeral version of the number is II";
		break;
		case 3 :
		cout << "Roman numeral version of the number is III";
		break;
		case 4 :
		cout << "Roman numeral version of the number is IV";
		break;
		case 5 :
		cout << "Roman numeral version of the number is V";
		break;
		case 6 :
		cout << "Roman numeral version of the number is VI";
		break;
		case 7 :
		cout << "Roman numeral version of the number is VII";
		break;
		case 8 :
		cout << "Roman numeral version of the number is VIII";
		break;
		case 9 :
		cout << "Roman numeral version of the number is IX";
		break;
		case 10 :
		cout << "Roman numeral version of the number is X";
		break;
	}
	return 0;
}
	


