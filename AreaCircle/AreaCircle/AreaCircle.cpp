// AreaCircle.cpp : This file contains the 'main' function.
// 
// More practice working expressions in C++.
// 
// This script is meant to find the area of a circle whose radius is given by
// the user.
// 
// @author: Landon Sturgeon
// @create: 221216
//


// no idea what this does right now but needed in order to use pi?
#define _USE_MATH_DEFINES  

#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    // Variables to hold values needed by the program
    float   r, Area;
    string  UserInput;

    // Collect the radius of the circle from the user
    printf("What is the radius of the circle: ");
    getline(cin, UserInput);
    r = atof(UserInput.c_str());

    // Calculate the circle's area 2 * pi * r^2
    Area = 2 * M_PI * r * r;
    
    // Output the area of the circle to the console
    printf(
        "The area of a circle with a radius of %f = %f",
        r, Area
    );
}
