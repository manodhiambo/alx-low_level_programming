#include <stdio.h>
#include "holberton.h"
#include "main.h"

/**
 * main - main block
 *
 * A function that prints the numbers, from 0 to 9, followed by a new line
 * Prototype: void print_numbers(void)
 * You can only use _putchar twice in your code
 * Return: nothin
 */

void print_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		_putchar(n + '0');
		n += 1;
	}
	_putchar('\n');
}
