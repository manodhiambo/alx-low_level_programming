#include <stdio.h>
#include "holberton.h"
#include <time.h>

/**
 * main - main block
 * A function that computes the absolute value of an integer.
 *Prototype: int _abs(int)
 *Return: int
 */

int _abs(int x)

{
	if (x < 0)

	{
		x = x * (-1);

		return (x);
	}

	else

		return (x);
}
