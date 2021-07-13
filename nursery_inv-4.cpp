/****SAMPLE PROGRAM HEADER*******************************************************
Lofton Bullard	        Total Points:  10
Due Date:  
Course:  C0P3014
Assignment:  Assignment 1
Professor: Dr. Lofton Bullard

Description: (Your program description goes here -- tell what it does--eg...In the program we processed....


*************************************************************/
#include <iostream> //standard library for i/o
#include <string> // always include this when you use the string class
#include <iomanip>

using namespace std;

int main()
{

	//**********MAGIC FORMULA  WILL EXPLAIN**************************
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	//***************************************************************

	string user_response = "y";

	//declare and comment your user variable here
	string pname;   //string that holds the plant name
	string cname;   //string that holds the county name
	double plant_cost; //double that hold the cost of a plant;
	int quantity; //int that hold the number of plants purchased;
	double purchase_tax = 0; //tax of the county
	double net_cost = 0;//cost of the plant
	double discount = 0;// discount based on number of items
	double total_cost = 0; // total cost after tax and discount 

	while (user_response == "y" || user_response == "Y")
	{
	  //The code to get the user's input if given in the following
		//Input Statements 
		cout << "xyz";
		cout << "Enter the Plant Name: ";
		cin >> pname;
		cout << "Enter the County Name: ";
		cin >> cname;
		cout << "Enter the Plant Cost: ";
		cin >> plant_cost;
		cout << "Enter the Quantity: ";
		cin >> quantity;

	  //Perform the calculations here
		//Calculations
		//net_cost = quantity * plant_cost;

		//Logic ...if else statements
		//if (quantity <= 0)
		//	discount = 0;
		//else if (quantity >= 1 && quantity <= 5)
		//	discount = .01 * net_cost;
		//else if ....

		//if (cname == "dade")
		//	purchase_tax = net_cost * .065;
		//else if ....

		//total_cost = ....

		//Print Results to screen here
		//Output Statement
		//cout << endl << endl;
		//cout << "Plant Name = " << pname << endl;
		//cout << "County Name = " ....

		cout << "Would you like to do another calculation (Y or N): " << endl;
		cin >> user_response;
	}

	return  0;
}