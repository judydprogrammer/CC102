#include <iostream>

using namespace std;

int main ()
{
	String name;
	float sugarPriceUSD = 0.00, ricePricePound = 0.00, sardinesPricePound = 0.00 coffeePriceUSD = 0.00, milkPriceUSD = 0.00;
	float sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;
	int total_cost;
	int usdollars;
	int php;
	
	
	cout << "Enter the Price of Sugar: " ;
	cin >> sugarPriceUSD;
	cout << "Enter the Price of Rice: " ; 
	cin >> ricePricePound;
	cout << "Enter the Price od sardines: " ;
	cin >> sardinesPricePound;
	cout << "Enter the Price of coffee: " ;
	cin >> coffeePriceUSD;
	cout << "Enter the Price of Milk: " ;
	cin >> milkPriceUSD;
	cout << "**********************************************************" << endl;
	cout << "Enter the Quantity of Sugar: " ;
	cin >> sugarQty;
	cout << "Enter the Quantity of Rice: " ;
	cin >> riceQty;
	cout << "Enter the Quantity of Sardines: " ;
	cin >> sardinesQty;
	cout << "Enter the Quantity of Coffee: " ;
	cin >> coffeeQty;
	cout << "Enter the Quantity of Milk: " ;
	cin >> milkQty;
	cout << "**********************************************************" << endl;
	float total_cost = (SugarPrice)*(SugarQty)+(RicePrice)*(RiceQty)+(SardinesPrice)*(SardinesQty)+(CoffeePrice)*(CoffeeQty)+(MilkPrice)*(MilkQty)
	
	cout << "Total cost in PHP: " << totalcostPhp << endl;
	return 0;
} 
