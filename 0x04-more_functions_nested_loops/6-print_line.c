#include "holberton.h"
#include "main.h"

/**
 * main - main block
 *
 * A function that draws a straight line in the terminal.
 * You can only use _putchar function to print
 * Where n is the number of times the character _ should be printed
 * The line should end with a \n
 * If n is 0 or less, the function should only print \n
 * Return: nothing
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		if (n > 0)
		{
			_putchar(95);
			i += 1;
		}
		else
			_putchar('\n');
	}
	_putchar('\n');
}
