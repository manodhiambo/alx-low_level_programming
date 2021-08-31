#include <stdio.h>
#include "main.h"
#include "holberton.h"
/**
 * main - main block
 *  A function that prints 10 times the alphabet, in lowercase.
 *You can only use _putchar twice in your code
 *Return: nothing
 */

void print_alphabet_x10(void)

{
	int l;

	int n = 0;

	while (n < 10)

	{
		l = 'a';

		while (l <= 'z')

		{
			_putchar(l);

			l += 1;

		}

		_putchar(10);

		n += 1;

	}
}
