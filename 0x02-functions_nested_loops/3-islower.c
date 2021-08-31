#include <stdio.h>
#include "main.h"
#include "holberton.h"
/**
 * main - main block
 * Write a function that checks for lowercase character.
 * Prototype: int _islower(int c);
 *Returns 1 if c is lowercase
 *Returns 0 otherwise
 *Return: int.
 */
 int _islower(int c)

{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
