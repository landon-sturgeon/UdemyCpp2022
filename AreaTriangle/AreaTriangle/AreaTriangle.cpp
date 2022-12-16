// AreaTriangle.cpp : This file contains the 'main' function.
// The point of this file is to capture knowledge surrounding variable data
// types and include statments needed for rudimentary programs.
// 
// @author: Landon Sturgeon
// @created: 221216
//

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    float Base, Height, Area;

    // collect the triangle's base value
    printf("What is the base of the triangle?: ");
    cin >> Base;

    // collect the triangle's height value
    printf("What is the height of the triangle?: ");
    cin >> Height;

    // calculate the area of the triangle (1/2) * base * height
    Area = 0.5f * Base * Height;

    printf(
        "The area of a triangle with a base of %d and a Height of %d = %d ", 
        Base, Height, Area
    );

    // always have to return an int since main requires it as return value
    return 0;
}