#include "holberton.h"
#include "main.h"
#include <stdio.h>

/**
 * more_numbers -  function that prints 10 times the numbers, from 0 to 14.
 *
 * Return: nothing.
 */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
				putchar((y / 10) + '0');
			putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}
