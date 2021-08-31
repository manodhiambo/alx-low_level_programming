#include <stdio.h>
#include "holberton.h"
#include <time.h>

/**
 * main - main block
 * A function that prints the last digit of a number.
 *Prototype: int print_last_digit(int)
 *Returns the value of the last digit
 *Return: int
 */

int print_last_digit(int x)

{
	x %= 10;

	if (x < 0)

		x *= -1;

	_putchar(x + '0');

	return (x);
}
