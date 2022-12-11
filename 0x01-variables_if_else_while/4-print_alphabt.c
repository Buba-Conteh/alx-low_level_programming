#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* main -Print all the letters except q and e */
/* betty style doc for function main goes there */
int main(void)
{
	/* thi is the main method*/
	char ch;

	 for( ch = 'a' ; ch <= 'z' ; ch++){
		if(ch != 'e' || ch != 'q' )
		{
			
	 		putchar(ch);
		}
	 }

	putchar('\n');

	 return(0);
}
