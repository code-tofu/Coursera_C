/* 
Find and correct the error(s) in the program found by clicking "My Submission". What you should learn is how integer and double arithmetic work, including some ideas about conversions.

The program has a mistake. Redo the program in a text file and upload it by clicking "upload file" below. Your peers will then review your submission to see whether you have appropriately fixed the errors.
The following code is supposed to produce the volume of a sphere as a double but is using ints. 

#include<stdio.h>
#define PI 3.14159
int main(void)
{ 
 int radius;
 printf(“Enter radius:”);
 scanf(“%d”, &radius);
printf(“volume is : %d \n\n“, 4 *radius*radius*radius/3 );
return 0;
}
*/

#include<stdio.h>
#define PI 3.14159
int main(void)
{ 
 int radius;
 printf("Enter radius:");
 scanf("%d", &radius);
printf("volume is : %lf \n\n", (4.0 *radius*radius*radius)/3.0 );
return 0;
}
