/*
Anthony Thompson
C++ Fall 2020
Due Sep 14 2020 11:59pm
Lab 1 Exploring Output.
This lab is designed to get you familiar output to the command prompt using C++.
*/

#include <iostream>
#include <string>

using namespace std;

const string M = "Monday		"; //Declaring days of the week for future use
const string T = "Tuesday		";
const string W = "Wednesday	";
const string F = "Friday		";
const string C1 = "8:00	Calculus 1"; //Declaring class names including time where possible to minimize coding
const string C2 = "10:00	Composition II"; 
const string C = "	C++";
const string GC = "	General Chemistry";
const string EP = "9:00	Engineering Problems";
const string stars1 = "  *   *   *   *"; //Declaring star lines to call for checkerboard
const string stars2 = "*   *   *   *";
int main()
{
	
	// Outputting week schedule
	cout << M << C1 << endl;
	cout << M << C2 << endl;
	cout << M << "12:00" << GC << endl;
	cout << M << "1:30" << C << endl << endl;
	cout << T << EP << endl;
	cout << T << "1:00" << C << endl << endl;
	cout << W << C1 << endl;
	cout << W << "2:00" << GC << endl << endl;
	cout << F << C1 << endl << endl;

	// Outputing checkerboard
	cout << stars1 << endl;
	cout << stars2 << endl;
	cout << stars1 << endl;
	cout << stars2 << endl;
	cout << stars1 << endl;
	cout << stars2 << endl;
	cout << stars1 << endl;
	cout << stars2 << endl;

	return 0;
}