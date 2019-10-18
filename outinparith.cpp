#include "stdafx.h"
#include <iostream>
#include <iomanip> //we have to include this header file to use setw manipulator

int main()
{
	//OUTPUT - INPUT
	int ftemp;
	std::cout << "Welcome to Fahrenheit to Celsius program" << std::endl << "Please enter temperature in F\n";
	//cout outputs stream to screen, here it outputs such a string constant and has the endl manipulator to make a new line 
	//\n escape sequence can also be used to have a new line
	std::cin >> ftemp; //store the input to the variable ftemp
	int ctemp = (ftemp - 32) * 5 / 9; //calculating temperature in C
	std::cout << "Temperature in C = " << ctemp << std::endl; //cout can differentiate between a string constant and a variable 
	//notice the insertion operator, <<, is cascaded here, >> can be cascaded too for cin

	//displaying multiple variables
	long pop1 = 2459517, pop2 = 18, pop3 = 9164; //note how we initialized the variables in same line
	std::cout << "Location " << "Population" << std::endl
		<< "New York " << pop1 << std::endl //see how it ignores the whitespace
		<< "Chicago  " << pop2 << std::endl //see how operator cascading is useful
		<< "San Jose " << pop3 << std::endl; //the outputs is not well organized; not aligned

	//using setw manipulator
	long pop11 = 2459517, pop12 = 18, pop13 = 9164;
	std::cout << std::setw(8) << "Location" << std::setw(12) << "Population" << std::endl //use setw manipulator to set the width for the output
		<< std::setw(8) << "New York" << std::setw(12) << pop11 << std::endl //we don't need to add spaces in the strings anymore
		<< std::setw(8) << "Chicagoo" << std::setw(12) << pop12 << std::endl
		<< std::setw(8) << "San Jose" << std::setw(12) << pop13 << std::endl; //the output is lined up to the right


	//ARITHMETIC OPERATORS
	std::cout << 6 % 8 << std::endl << 7 % 8 << std::endl << 8 % 8 << std::endl << 9 % 8 << std::endl << 10 % 8 << std::endl; 
	//calculates and outputs the remainder; higher precedence than <<
	int x = 30;
	x += 5; //arithmetic assignment operator, equivalent to x=x+5
	std::cout << "\nx=x+5=x+5" << x << std::endl; //same we can go for x*=5 x/=7 x%=3
	int counter = 1;
	std::cout << "\ncounter=" << ++counter << std::endl; //increment operator, here prefix, so it increment variable before output
	std::cout << "counter=" << counter++ << std::endl; //however here it's postfix, so it increment variable after output
	std::cout << "counter=" << counter << std::endl; //now, it has been incremented, so it outputs 3
	
	return 0;
}

