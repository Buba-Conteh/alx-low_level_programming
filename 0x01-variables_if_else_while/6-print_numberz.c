#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* main -Print all the letters except q and e */
/* betty style doc for function main goes there */
int main(void)
{
	int num;

	for( num = 0; num < 10; num++)
	putchar(num+'0');

	putchar('\n');

	return(0);
}
