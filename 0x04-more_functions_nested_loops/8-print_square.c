#include <stdio.h>
#include "holberton.h"
#include "main.h"

/**
 * main - main block
 *
 * A function that prints a square, followed by a new line
 * Prototype: void print_square(int size)
 * You can only use _putchar function to print
 * Where size is the size of the square
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the square
 * Return: nothing
 */

void print_square(int size)
{
	int col, row;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (col = 0; col < size; col++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
