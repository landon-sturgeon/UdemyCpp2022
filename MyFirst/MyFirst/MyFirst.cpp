// MyFirst.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>; // needed for getline(), it's not in iostream

using namespace std;

int main()
{
    // ::    -> namespace resolution (e.g. cout can be found under std library)
    // =     -> assign to
    // >>/<< -> insert into
    
    /*
    int a, b, c;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;

    c = a + b;

    cout << "Sum is " << c;
    */

    /*
                        DATA TYPES
    PRIMITIVE TYPES (those that are provided by the compiler)
    Integral (no decimal point)           SIZE    RANGE
        int ............................. 2/4     -32768       s<-> 32767
        char ....................... .... 1       -128         <-> 127
    Floating Point (has decimal point)
        float ........................... 4       -3.4x10^-38  <-> 3.4x10^38
        double .......................... 8       -1.7x10^-308 <-> -1.7x10^-308
    Boolean (T/F, 1/0)
        bool ............................ NA

    USER DEFINED
    Enum
    Structure
    Union
    Class
    Interface

    DERIVED
    Array
    Pointer
    Reference
    */

    string str;

    cout << "May I know your name: ";
    getline(cin, str);
    cout << "Welcome " << str;

    return 0;
}