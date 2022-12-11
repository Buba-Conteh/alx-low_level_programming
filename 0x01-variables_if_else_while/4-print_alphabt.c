#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

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


	 return(0);
}
