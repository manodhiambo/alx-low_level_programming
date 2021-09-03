#include "holberton.h"
#include "main.h"

/**
 *print_numbers - a function that prints numbers from 0 to 9
 *followed by a new line
 *
 *Return: The returned value will be 0.
 */

void print_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		n += 1;
	}
	_putchar('\n');
}
