/* Count blanks, digits, and total characters
* demonstrate loop with for statement
Sally Coder Jan 23, 2018
page 165 ABC4
*/
#include <stdio.h>
int main(void)
{
	int blanks = 0, digits = 0, total_chars = 0;
	int c; 	// use for int value of character
	/*
	The C library function int getchar(void) gets a character (an unsigned char) from stdin.
	This is equivalent to getc with stdin as its argument.
	*/
	for(; (c = getchar()) != EOF; total_chars++ )
	{
		if (c == '')
			++blanks;
		else if (c >= '0' && C <= '9')
			++digits;
	};
	printf(" blanks = %, digits = %d , total_chars = %d\n\n",blanks, digits, total_chars);
	return 0;
};