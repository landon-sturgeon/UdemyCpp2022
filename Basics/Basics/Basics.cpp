// Basics.cpp : This file contains the 'main' function.
// Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	/* COMPOUND ASSIGNMENT OPERATORS
	Typical assignment variables
	+=, -=, *=, /=, %=

	All of these perform the operation then assign the variable
	Useful for when you need to do cumulative operations
	It's also faster to execute
	*/
	int i = 5;
	i = i + 1;

	// can be performed faster and read more easily by using the below
	i += 1;

	/* INCREMENT/DECREMENT OPERATORS
	Typical usage ++, --
	will incrase and decrease exactly how you think it will
	*/

	/* OVERFLOW
	What happens when a variable exceeds it's allowable limit
	E.g. Char can go from -128 to 127. If you try to create a char value of 
	128, it'll automatically return to -128

	Think of it like a clock, always creating a cyclic behavior
	*/
	char x = 127;
	x++; // this will return a value of -128 since char types can only go from
		 // -128 to 127
	cout << (int)x << endl;

	/* BITWISE OPERATORS
	& == AND
	| == OR
	^ == X-OR
	~ == NOTP3rro
	<< == LEFT SHIFT
	>> == RIGHT SHIFT

	BIT 1 | BIT 2 | & | | | ^ |
	   0  |   0   | 0 | 0 | 0 | 
	   1  |   0   | 0 | 1 | 1 |
	   0  |   1   | 0 | 1 | 1 |
	   1  |   1   | 1 | 1 | 0 |

	int x = 11 and y = 5;
	x in binary = 00001011
	y in binary = 00000101

	  x & y | 00000001 == 1 as int
	  x | y | 00001111 == 15 as int
	  x ^ y | 00001110 == 14 as int
	
	if x = 5, what is int y = ~x?
	x = 00000101
	y = 11111010
	take the 2's compliment to find the value since the leading 1 represents a 
	negative decimal (switch 1 with 0 and vice versa then +1)
	y = 00000101
	          +1
	    00000110 == 6
	so ~x = -6

	>> divides the variables by 2
	<< multiplies the variable by 2^i 
	(i being whatever you're left shifting it with)
	THE SIGN BIT IS NEVER AFFECTED!!! IF IT'S NEGATIVE IT'LL STAY NEGATIVE
	*/
	char x = 20, y;
	y = x << 1;
	cout << (int)y << endl;

	/* ENUMS
	User defined data types basically
	Departments		Menus		Days	Card Colors		Feedback
	-----------------------------------------------------------------
	CS				New			Mon		club			poor
	ECE				Open		Wed		spade			satisfactory
	IT				Save		Fri		diamond			good
	Civil			Close		Sat		hearts			excellent

	can assign codes to each word in an enum
	can create enums in two ways, using consts and typedefs
	
	CONST METHOD
	const int CS = 1;
	const int ECE = 2;
	etc...

	TYPEDEF METHOD
	enum day {mon, tue, wed, thu, fri, sat, sun};
	this will assign 0 to mon, 1 to tue, etc
	day will be a new data type
	to use a typedef enum
	day d;
	d = mon; // this works
	d = fri; // this works
	d = 0;   // this doesn't work, int values reserved because already assigned
	
	you can assign any enum value any number by...
	enum dept { cs=1, ece, it=5, civil}
	cs = 1, ece = 2, it = 5, civil = 6

	*/
	
	// ALWAYS NEED TO RETURN AN INT TO TELL INTERPRETER IF IT SUCCEEDED
	return 0;

}