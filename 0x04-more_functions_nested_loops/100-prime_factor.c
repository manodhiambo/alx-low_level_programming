#include <stdlb.h>
#include <stdio.h>
#include "holberton.h"
#include "main.h"

/**
 * The prime factors of 1231952 are 2, 2, 2, 2, 37 and 2081
 * A prgram that fnds and prnts lrgst prime factor of no. 612852475143,\n
 * You are allowed to use the standard library
 * Return: 0
 */

int main(void)
{
	long num = 612852475143;
	long divisor = 2;
	long larg_prim = 0;

	while (num != 1)
	{
		if (num % divisor == 0)
		{
			num = num / divisor;
			larg_prim = divisor;
		}
		divisor += 1;
	}
	printf("%ld\n", larg_prim);
	return (0);
}
