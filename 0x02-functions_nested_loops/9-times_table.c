#include <stdio.h>
#include <time.h>
#include "main.h"
/**
 * main - main block
 *A function that prints the 9 times table, starting with 0.
 *Prototype: void times_table(void)
 *Format: see example
 *Return: nothimg
 */
void times_table(void)
{
	int row, col;

	int mult = 0;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			mult = (row * col);
			if (mult < 10)
			{
				if (col != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(mult + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
			}
			if (col != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
