// QuadraticEq.cpp : This file contains the 'main' function.
// 
// More practice with expressions and also using the math library.
// 
// Script is to find the roots of the quadratic equation (roots and all).
// 
// @author: Landon Sturgeon
// @created: 221216
//

#include <iostream>
#include <string>       // to handle string to int conversion
#include <cstdio>       // to handle string output to console a bit easier

using namespace std;

int main()
{
    // Variables used to store user input and root values
    float   a, b, c, s1, s2;
    string  UserInput;

    // collect the triangle's height value
    printf("What does 'a' equal: ");
    getline(cin, UserInput);
    a = atof(UserInput.c_str());

    printf("What does 'b' equal: ");
    getline(cin, UserInput);
    b = atof(UserInput.c_str());

    printf("What does 'c' equal: ");
    getline(cin, UserInput);
    c = atof(UserInput.c_str());

    // Finally calculate s1 and s2 (the roots) based on the user input
    s1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    s2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    // Display the final values to user through the console
    printf(
        "a = %f, b = %f, and c = %f produced root 1 = %f and root 2 = %f",
        a, b, c, s1, s2
    );

    // always return an int!!!
    return 0; // 0 for no error occurred during execution
}
