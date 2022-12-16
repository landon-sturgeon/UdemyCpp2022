// SumOfNConseqNumbers.cpp : This file contains the 'main' function. 
// 
// More practice with C++ expressions.
// This time we're dipping into some neat algorithms.
// 
// @author: Landon Sturgeon
// @created: 221216
//

#include <iostream>
#include <string>
#include <cstdio>

// helpful so we don't need to keep writing std::<blah blah blah>
// not so helpful since we're loading in all functions in std though...
using namespace std;

int main()
{
	// variables to hold values for calculations
	int n		= 0;
	int Total	= 0;
	string UserInput;

	// Collect which natural number (basically whole int) to go to
	printf("What number do you wish to add up to: ");
	getline(cin, UserInput);
	n = atoi(UserInput.c_str());

	// User fancy algorithm to find sum of natural numbers
	// will always be an integer since inputs were natural numbers
	Total = n * (n + 1) / 2;

	// Print to the console what the total is
	printf(
		"The total for all the numbers leading up to and including %i = %i", 
		n, Total
	);

	// always return an int!!!
	return 0;
}
