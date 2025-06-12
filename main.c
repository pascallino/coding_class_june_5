#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
int main(void)
{
	int i;

	for (i = 97; i<=122; i=i+1)
	{

		if (i != 101 && i != 113)
		{	
			putchar(i);
		}
	}
	putchar('\n');




	return (0);
}
