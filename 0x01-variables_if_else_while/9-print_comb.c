#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* main-Write a program that prints the lowercase */
/* betty style doc for function main goes there */
int main(void)
{
	/*main Write a program that prints the */

	int num;

	for( num = 0 ; num < 10 ; num++){
		if(num != 9)
		{
			putchar (num+'0');
			putchar (',');
		}
			putchar (' ');
	 
	}

	putchar ('\n');

	return (0);
}
