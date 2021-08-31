#include <stdio.h>
#include <time.h>
#include "holberton"

/**
 * main - main block
 * A function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 *Prototype: void jack_bauer(void)
 *You can listen to this soundtrack while coding :)
 *Return: nothing
 */

void jack_bauer(void)

{
	int x = 0;

	int j = 0;

	while (x <= 23)

	{
		j = 0;

		while (j <= 59)

		{
			_putchar((x / 10) + '0');

			_putchar((x % 10) + '0');

			_putchar(':');

			_putchar((j / 10) + '0');

			_putchar((j % 10) + '0');

			_putchar('\n');

			j += 1;

		}
		x += 1;
	}
}
			
