// AreaTriangle.cpp : This file contains the 'main' function.
// The point of this file is to capture knowledge surrounding variable data
// types and include statments needed for rudimentary programs.
// 
// @author: Landon Sturgeon
// @created: 221216
//

#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
    float Base, Height, Area;
    string UserInput;

    // collect the triangle's base value
    printf("What is the base of the triangle?: ");
    getline(cin, UserInput);
    Base = atof(UserInput.c_str());

    // collect the triangle's height value
    printf("What is the height of the triangle?: ");
    getline(cin, UserInput);
    Height = atof(UserInput.c_str());

    // calculate the area of the triangle (1/2) * base * height
    Area = (float) 0.5 * Base * Height;

    printf(
        "The area of a triangle with a base of %f and a Height of %f = %f ", 
        Base, Height, Area
    );

    // always have to return an int since main requires it as return value
    return 0;
}