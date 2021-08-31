#include <stdio.h>
#include <time.h>
#include "holberton.h"

/**
 * main - main block
 *A function that prints the alphabet, in lowercase, followed by a new line
 *Prototype: void print_alphabet(void);
 *You can only use _putchar twice in your code
 *Return: nothing.
 */

void print_alphabet(void)

{
	int l = 'a';

	while (l <= 'z')
	{

		_putchar(l);

	l += 1;

	}

	_putchar(10);

}
