/*
Write a program that can give the sine of a value between 0 and 1 (non inclusive).
You will be graded based on whether the program can output a value in the correct range and whether your code is well-formatted and logically correct.
*/

#include <stdio.h>
#include <math.h>

int main(void) {
    double x = 0.0;
	// function takes in user input x as a double and applies the function sin unto user input.
	printf("Input value of x (where 0<x<1) in sin(x): \n");
    scanf("%lf", &x);
	
	// check for values of x
	if (x>0 && x<1)
  	printf("The value of sin(x) is %lf \n", sin(x));
    else
    printf("Please input a valid value of x");
    
    return 0;
}