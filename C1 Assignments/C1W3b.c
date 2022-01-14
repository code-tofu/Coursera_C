/*
Write a C program that has a function that prints a table of values for sine and cosine between (0, 1). 
You will upload your program as a text file. 
*/

#include <stdio.h>
#include <math.h>

int main(void){
double i = 0.0;
double x = 0.0; //increment step

//takes in user's preference for each step of the table for sin/cos values
printf("Input increment step for table: \n"); 
scanf("%lf", &i);


printf("(x): \t sin(x):\t cos(x): \n");

//The C library function double sin(double x) returns the sine of a radian angle x.
while(x<=1){
printf("%.4lf \t %.4lf \t %.4lf \n",x, sin(x),cos(x));

/* double check value of i in loop
printf("%lf\n",i);
*/

x = x + i;
}

return 0;
}

/* Questions:
what happens if you add int to a double
why does print f not need & address
*/
}