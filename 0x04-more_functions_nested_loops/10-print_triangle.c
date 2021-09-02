#include <stdio.h>
#include "holberton.h"
#include "main.h"

/**
 * main - main block
 * A function that prints a triangle, followed by a new line
 * Prototype: void print_triangle(int size);
 *You can only use _putchar function to print
 *Where size is the size of the triangle
 *If size is 0 or less, the function should print only a new line
 *Use the character # to print the triangle
 *Return: 0
 */

void print_triangle(int size)
{
	int row, col, aux;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (col = 0; col < size; col++)
			{
				aux = (size - row) - 1;
				if (col < aux)
					_putchar(' ');
				else
					_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
