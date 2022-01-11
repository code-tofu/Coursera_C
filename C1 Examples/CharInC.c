/* Char in C
* A Fundamental Type
* Sally Coder
* Nov. 8, 2017
*/
#include <stdio.h>
int main(void)
{
	char c = 'a';
	printf("c in ASCII is %d\n", c);
	printf("c the character %c\n", c);
	printf("Three consecutive chars are : %c%C%c \n", c, c+1, c+2);
	printf("Three bell rings chars are : %%%c \n", '\a', '\a', '\a');
	return 0;
}