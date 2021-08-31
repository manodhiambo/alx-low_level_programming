#include <stdio.h>
#include "main.h"
#include <time.h>
/**
 * main - main block
 * If we list all the natural numbers below 10 that are multiples of 3 or 5.
 * We 3, 5, 6 and 9. The sum of these multiples is 23. 
 * Return: int
 */
int main(void)
{
	int multi = 0;

	int res = 0;

	while (multi < 1024)
	{
		if (multi % 3 == 0 || multi % 5 == 0)
		{
			res += multi;
		}
		multi += 1;
	}
	printf("%d\n", res);
	return (0);
}
