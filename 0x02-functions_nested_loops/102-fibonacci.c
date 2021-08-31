#include <stdio.h>
#include "holberton.h"
#include <time.h>

/**
 * main - main block
 *  a program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.
 *The numbers must be separated by comma, followed by a space ,
 *You are allowed to use the standard library
Return: int
*/

int main(void)

{
	long i = 0;

	long j = 1;

	int n = 0;

	long fib;

	while (n < 50)

	{
		fib = j + i;

		if (n != 49)

			printf("%ld, " fib);

		else

			printf("%ld\n", fib);

		i = j;

		j = fib;

		n += 1;
	}

	return (0);
}
