#include <stdio.h>
#include "holberton.h"
#include "main.h"

/**
 *main - main block
 *
 * A function that draws a diagonal line on the terminal
 * Prototype: void print_diagonal(int n)
 * Where n is the number of times the character \ should be printed
 * The diagonal should end with a \n
 * If n is 0 or less, the function should only print a \n
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	while (i < n)
	{
		while (j <= i)
		{
			if (j != i)
				_putchar(' ');
			else
				_putchar(92);
			j += 1;
		}
		_putchar('\n');
		i += 1;
		j = 0;
	}
	if (n <= 0)
		_putchar('\n');
}
