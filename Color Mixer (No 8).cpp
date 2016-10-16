// Programming Challenges page 221 No 8
// Color Mixer
 
#include<iostream>
#include<string>

using namespace std;

int main()
{
	string color1;
	string color2;

	cout << "Enter two primary colors to be mixed : ";
	cin >> color1 >> color2;
	
	if (color1 == "red" && color2 == "blue" || color1 == "blue" && color2 == "red"){
		cout << endl << "You got purple";
	}
	else if (color1 == "red" && color2 == "yellow" || color1 == "yellow" && color2 == "red"){
		cout << endl << "You got orange";
	}
	else if (color1 == "blue" && color2 == "yellow" || color1 == "yellow" && color2 == "blue"){
		cout << endl << "You got green";
	}
	else if (color1 != "red" || color1 != "blue" || color1 != "yellow" ){
		cout << endl << "Error, you don't mix primary colors.";
	}
	else if (color2 != "red" || color2 != "blue" || color2 != "yellow"){
		cout << endl << "Error, you don't mix primary colors.";
	}
	
	return 0;
}

