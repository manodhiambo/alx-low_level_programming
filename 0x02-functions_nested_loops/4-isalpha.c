#include <stdio.h>
#include "main.h"
#include "holberton.h"

/**
 * main - main block
 * A function that checks for alphabetic character
 * Prototype: int _isalpha(int c)
 * Returns 1 if c is a letter, lowercase or uppercase
 * Returns 0 otherwise
 * Return: int
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))

		return (1);

	else

		return (0);

}
