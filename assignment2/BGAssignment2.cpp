#include <iostream>
#include <iomanip>
using namespace std;

// Brandon Gonzalez
// Assignment 2
// This program will:
//		- Ask for number of Stock A shares bought
//		- Ask for purchase price of Stock A
//		- Ask user to enter the sale price of Stock A after holding it for a year
//		- Ask user to enter intended purchase price of Stock B
// 
//		- Display total amount paid for Stock A
//		- Display total amount received from selling Stock A
//		- Display total amount of money gained or lost from the sale of Stock A
//		- Display the number of shares of Stock B that can be purchased using the money from the sale of stock A


// variables
float AShares, purchasePriceAShares, salePriceAShares, purchasePriceBShares;

// Main function, returns 0
int main() {

	cout << fixed << showpoint << setprecision(2);

	// Ask for number of Stock A shares bought
	// 
	// Ask for purchase price of Stock A
	// 
	// Ask user to enter the sale price of Stock A after holding it for a year
	// 
	// Ask user to enter intended purchase price of Stock B



	// Display total amount paid for Stock A
	float total_Paid_StockA = 1100 * 51.44;
	cout << "Total paid for Stock A: $" << total_Paid_StockA;

	// Display total amount received from selling Stock A
	float total_Amount_Received = 1100 * 57.30;
	cout << "\nTotal amount received after selling Stock A: $" << total_Amount_Received;

	// Display difference between received and paid
	float difference = total_Amount_Received - total_Paid_StockA;
	cout << "\nDifference: $" << difference;

	// Display number of shares of Stock B that can be purchased
	float shares = total_Amount_Received / 37.89;
	cout << "\nAmount of Stock B shares purchased: " << shares;

	return 0;
}