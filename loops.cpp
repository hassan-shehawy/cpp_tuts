#include "stdafx.h"
#include <iomanip>
#include <iostream>

int main()
{
	int x;
	for (x = 0; x<10; x++) //x=0 is initialization expression, x<10 is test expression, x++ is increment expression
		std::cout << x*x << "\t"; //loop body
	std::cout << std::endl;



	for (x = 0; x<10; x++)
	{ //we have multiple statements in the loop, so we  must use those curly brackets
		std::cout << std::setw(4) << x; //those statements are called a block
		int c = x*x*x; //and this variable is only seen visible within this block
		std::cout << std::setw(6) << c << std::endl;
	} //and end them
	std::cout << std::endl;



	unsigned int xy;
	unsigned long factorial = 1;
	std::cout << "Enter a number" << std::endl;
	std::cin >> xy;
	for (unsigned int i = xy; i >= 1; i--) //note that we can define a variable here, but it's seen in the whole program
	{ //note that we can use more than an initialization expression and more than an increment expression, but only 1 test
		factorial *= i;
	} //or we can drop all expressions like for(;;)
	std::cout << "Factorial of " << xy << " is " << factorial << std::endl;



	x = 10;
	std::cout << "Enter any number, type 0 to terminate" << std::endl;
	while (x != 0)
	{
		std::cout << std::endl;
		std::cin >> x;
	}



	x = 1;
	int p = 1;
	while (p<9999) //to make sure it fits into 4 digits format
	{
		std::cout << std::setw(2) << x;
		std::cout << std::setw(5) << p << std::endl;
		p = x*x*x*x;
		x++;
	}
	std::cout << std::endl;



	unsigned long d = 0, f = 1;
	const unsigned long l = 999999999;
	while (d < l / 2) //see here the precedence; arithmetic operation has higher precedence
	{		
		long s = d + f;  //creates Fibonacci series which is next terms = summation of previous 2
		f = d;
		d = s;
		std::cout << f << " ";
	}
	std::cout << std::endl;


	long xs, ys;
	char r;
	do //use the do loop when you want the loop to run at least once
	{
		std::cout << "Enter Dividend: ";
		std::cin >> xs;
		std::cout << "Enter Divisor: ";
		std::cin >> ys;
		std::cout << "The quotient is " << xs / ys;
		std::cout << " ,remainder is " << xs%ys << std::endl;
		std::cout << "Do another? (y/n)";
		std::cin >> r;				
	}
	while (r != 'n');


	return 0;
}

