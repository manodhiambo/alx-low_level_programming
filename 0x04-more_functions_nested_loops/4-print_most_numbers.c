#include <stdio.h>
#include "holberton.h"
#include "main.h"

/**
 * main - main block
 *
 * A function that prints the numbers, from 0 to 9, followed by a new line
 * Do not print 2 and 4
 * You can only use _putchar twice in your code
 * Return: nothing
 */

void print_most_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		if (n != 2 && n != 4)
		_putchar(n + '0');
	n += 1;
	}
	_putchar('\n');
}
