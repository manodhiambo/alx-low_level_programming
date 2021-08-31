#include <stdio.h>
#include "holberton.h"
#include "main.h"

/**
 * main - main block
 *A function that prints the alphabet, in lowercase, followed by a new line
 *Prototype: void print_alphabet(void);
 *You can only use _putchar twice in your code
 *
 *Return: Always 0.
 */
void print_alphabet(void) /*This prints the alphabet, in lowercase*/

{
	int i;

	for (i = 'a'; i <= 'z'; i++)

	{
		_putchar(i);
	}

	_putchar('\n');

}
