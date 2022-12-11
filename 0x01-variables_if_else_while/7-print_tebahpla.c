#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* Write a program that prints the lowercase alphabet in reverse, followed by a new line.*/
/* betty style doc for function main goes there */
int main(void)
{
	char ch;
	for(ch = 'z' ; ch >= 'a' ; ch--)
		putchar(ch);
	

	putchar('\n');

	return(0);
}
