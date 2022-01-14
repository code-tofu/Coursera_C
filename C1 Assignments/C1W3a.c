/*
Make changes to the following code, and upload your edited code as a text file so that your peers can review and grade you for it.

The following program is suppose to use the sin() function in the math library and write out an input's absolute value over an interval.
So for example if sine(0.6)  is 0.564 then its absolute value is the same (0.564).  But if sine(2.4)  is -0.675 then its absolute value is 0.675.

#include<stdio.h>
#include<math.h> has  sin(), abs(), and fabs()
int main(void)
{ 
double interval;
int i;
for(i = 0; i <30; i++)
{
 interval = i/10.0;
 printf(“sin( %lf ) = %lf \t”, interval, abs(sin(interval)));
}

printf(“\n+++++++\n”);
return 0;
}
*/

#include<stdio.h>
#include<math.h> //has  sin(), abs(), and fabs()
int main(void)
{ 
double interval; //because intervals of 0.1
int i; //increment is by 1

for(i = 0; i <30; i++)
	{
 	interval = i/10.0; //this means sin will evaluate values from 0 to 3 with increments of 0.1
 	printf("sin( %lf ) = %lf \t", interval, fabs(sin(interval))); //use fabs instead of abs for floating point values of interval
	}

printf("\n+++++++\n"); //merely a divider

return 0;
}
