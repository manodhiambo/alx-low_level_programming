#include <stdio.h>
#include "holberton.h"
#include <time.h>

/**
 * main - main block
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. Write a program that computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line.
 *You are allowed to use the standard library
 *Return: int
 */

int main(void)

{
	int multi = 0;

	int res = 0;

	while (mult < 1024)

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
