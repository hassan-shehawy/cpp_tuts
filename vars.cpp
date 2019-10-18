#include "stdafx.h"
#include <iostream>

int main()
{
    std::cout << "hello world"; //this is a comment    
    /*
    and that's
    a multiline
    comment
    */

    //VARIABLES -Numbers -Integers
    int x; //defining variable x as integer; 
    /*check the size and limits of this variable type based on your OS, 
    variable name is called identifier and it can be letters, numbers or _ and must start with letter or _ 
    and can’t be any of keywords; it’s case sensitive!*/
    int y; //this is called declaration and definition in the same time as it sets space for the variable in the memory; 
    //note that declaration need not be in the beginning of the program
    short l; //that's a different integer type, with fixed size and range
    long p; //that's a different integer type, with fixed size and range
    x = 20; //assigning 20 to x; it’s called assignment statement
    y = x + 10; //note that we must terminate with a semicolon; here x and 10 are considered integer constants
    std::cout << "y=" << y << std::endl;

    //VARIABLES -Numbers -Floats
    float rad = 5; //defining variable of type float (other types include long and double)
    const float PI = 3.14159F; //that's a constant qualifier; makes sure PI doesnt change; note the F to make sure it's float 
    //(compare to #define directive as #define PI 3.14)
    float area = PI * rad * rad;
    std::cout << "Area = " << area << std::endl;

    //VARIABLES -Numbers -signedXunsigned
    int signedVar = 1500000000; //that's our regular signed integer variable (can have a sign + or -)
    unsigned int unsignVar = 1500000000; //now that's unsigned variable, it has larger range
    signedVar = (signedVar * 2) / 3; //this calculation exceeds the range for signed variable
    unsignVar = (unsignVar * 2) / 3; //this, however is still in the range
    std::cout << signedVar << "   " << unsignVar << std::endl; //that's why signedVar is wrong and unsignVar is correct

    //VARIABLES -Characters
    char a = 'A'; //that's called "initialization" as give a value with declaring it as a character variable 
    //(type of size 1 byte, can store characters as ASCII number)
    char b = '\t'; // here \t is an escape sequence for tab; 
    //a: beep, b:backspace, f:formfeed, n:newline, r:return, \,',"":as they are, xdd:hexadecimal notation
    std::cout << a;
    std::cout << b;
    a = '\f';
    std::cout << a;
    std::cout << '\n';

    //VARIABLES -Boolean
    bool bol_var = true; //that's a boolean variable, can be either true or false

    //VARIABLES -Casting
    int m = 1500000000;
    m = (m * 10) / 10; //doing the multiplication step will bring a number beyond range of integer variable type
    std::cout << "M = " << m << std::endl; //wrong answer of course
    m = 1500000000;
    m = (static_cast<double>(m) * 10) / 10; //cast is used to manually convert a variable type, 
    //cast has different kinds, here we use static cast; you use it in this form static_cast(VariableNameToBeConverted), y=static_cast(x)
    std::cout << "M = " << m << std::endl; //correct answer; note that casting created a temporary variable that stored that big value
        
    return 0;
}
