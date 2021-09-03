#include "holberton.h"
#include "main.h"

/**
 *print_numbers - a function that prints numbers from 0 to 9
 *followed by a new line
 *
 *Return: The returned value will be 0.
 */

void print_numbers(void)
{
int i;
for (i = 48; i < 58; i++)
_putchar(i);
_putchar('\n');
}
