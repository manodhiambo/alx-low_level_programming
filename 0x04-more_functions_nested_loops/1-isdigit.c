#include <stdio.h>
#include "holberton.h"
#include "main.h"

/**
 * main - main block
 *
 * A  function that checks for a digit (0 through 9).
 *Prototype: int _isdigit(int c);
 *Returns 1 if c is a digit
 *Returns 0 otherwise
 *Return: int
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
