// Jeremy Harrell
// ITSE 
// Programming Problem three numbers in descending order 
//Making a program to order numbers from larger to smaller 

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;


int main()
{
	//initalizing my variable
	float FloatNum1 = 2;
	float FloatNum2 = 5;
	float FloatNum3 = 8;
	
	//making output for the numbers
	cout << "Choose a number: ";
	cin >> FloatNum1;
	cout << "Choose another number: ";
	cin >> FloatNum2;
	cout << "Choose one last number: ";
	cin >> FloatNum3;
	
	//setting up for the if statements
	double DbLargest = (FloatNum1 > FloatNum2) ? FloatNum1 : FloatNum2;
	cout << "Conditional: " << DbLargest << endl;

	cout << "Largest To smallest " << endl;
	
	//if statements for numbers 
	if (((FloatNum1 > FloatNum2) && (FloatNum2 > FloatNum3) && (FloatNum1 > FloatNum3))) {
		cout << FloatNum1 << " | " << FloatNum2 << " | " << FloatNum3 << endl;
	}
	else if (((FloatNum1 > FloatNum2) && (FloatNum2 > FloatNum3) && (FloatNum1 < FloatNum3))) {
		cout << FloatNum3 << " | " << FloatNum2 << " | " << FloatNum1 << endl;
	}
	else if (((FloatNum1 > FloatNum2) && (FloatNum2 < FloatNum3) && (FloatNum1 < FloatNum3))) {
		cout << FloatNum3 << " | " << FloatNum2 << " | " << FloatNum3 << endl;
	}
	else if (((FloatNum1 > FloatNum2) && (FloatNum2 < FloatNum3) && (FloatNum1 > FloatNum3))) {
		cout << FloatNum1 << " | " << FloatNum3 << " | " << FloatNum2 << endl;
	} 
	else if (((FloatNum1 < FloatNum2) && (FloatNum2 < FloatNum3) && (FloatNum1 < FloatNum3))) {
		cout << FloatNum1 << " | " << FloatNum3 << " | " << FloatNum2 << endl;
	}
	else if (((FloatNum1 < FloatNum2) && (FloatNum2 < FloatNum3) && (FloatNum1 > FloatNum3))) {
		cout << FloatNum1 << " | " << FloatNum3 << " | " << FloatNum2 << endl;
	} 
	else if (((FloatNum1 < FloatNum2) && (FloatNum2 > FloatNum3) && (FloatNum1 > FloatNum3))) {
		cout << FloatNum1 << " | " << FloatNum3 << " | " << FloatNum2 << endl;
	}
	else if (((FloatNum1 < FloatNum2) && (FloatNum2 > FloatNum3) && (FloatNum1 < FloatNum3))) {
		cout << FloatNum1 << " | " << FloatNum3 << " | " << FloatNum2 << endl;
	}
	
	
    return 0;
}

