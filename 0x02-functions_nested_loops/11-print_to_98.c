#include <stdio.h>
#include <time.h>
#include "main.h"

/**
 * main - main block
 * A function that prints all natural numbers from n to 98, 
 *Numbers must be separated by a comma, followed by a space
 *Numbers should be printed in order
 *The first printed number should be the number passed to your function
 *The last printed number should be 98
 *Return: nothing
 */
void print_to_98(int n)
{
	if (n < 98)

	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	if (n == 98)
	{
		printf("%d\n, ", n);
	}
}
