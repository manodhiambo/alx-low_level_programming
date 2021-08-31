#include <stdio.h>
#include "main.h"
#include <time.h>
/**
 * main - main block
 * A function that prints the n times table, starting with 0.
 *If n is greater than 15 or less than 0 the function should not print anything
 *Return: nothing
 */
void print_times_table(int n)

{
	int row, col;

	int mult = 0;

	if (n <= 15 && n >= 0)
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				mult = (row * col);
				if (mult < 10)
				{
					if (col != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(mult + '0');
				}
				else if (mult < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((mult / 10) + '0');
					_putchar((mult % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar((mult / 100) + '0');
					_putchar(((mult % 100) / 10) + '0');
					_putchar((mult % 10) + '0');
				}
				if (col != n)
					_putchar(',');
			}
			
			_putchar('\n');
		}
	}
}				
