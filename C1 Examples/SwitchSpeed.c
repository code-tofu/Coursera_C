/*
Sam Coder
ternary operator and flow of control
Feb 13, 2018
*/


#include <stdio.h>
int main()
{
	int speed;
	printf("\nEnter your speed as an integer:");
	scanf("%d", &speed);
	speed = (speed <= 65)? (65) : (speed <=70)? (70): (90);
	switch (speed)
{
	case 65: printf("\nNo speeding Ticket\n\n");break;
	case 70: printf("\nSpeeding Ticket\n\n");break;
	case 90: printf("\nExpensive Speeding Ticket\n\n");break;
	default: printf("\nIncorrect speed\n\n"); //unneeded
}
return 0;
}