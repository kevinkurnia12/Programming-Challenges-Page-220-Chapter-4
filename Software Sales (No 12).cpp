// Programming Challenges page 220 No 12
// Software Sales

#include <iostream>

using namespace std;

int main(){
	float dollar = 99;
	float quantity;
	float total;
	
	cout << "The number of units sold : ";
	cin >> quantity;
	
	if (quantity >= 10 && quantity <= 19){
		total = dollar * quantity - (0.2 * quantity * dollar);
		cout << endl << "Total cost of the purchase : " << total;
	}
	else if (quantity >= 20 && quantity <= 49){
		total = dollar * quantity - (0.3 * quantity * dollar);
		cout << endl << "Total cost of the purchase : " << total;
	}
	else if (quantity >= 50 && quantity <= 99){
		total = dollar * quantity - (0.4 * quantity * dollar);
		cout << endl << "Total cost of the purchase : " << total;
	}
	else if (quantity >= 100){
		total = dollar * quantity - (0.5 * quantity * dollar);
		cout << endl << "Total cost of the purchase : " << total;
	}
	else if (quantity < 10 && quantity > 0){
		total = dollar * quantity;
		cout << endl << "Total cost of the purchase : " << total;
	}
	else {
		cout << endl << "You don't enter the right units.";
	}
	return 0;
	}
