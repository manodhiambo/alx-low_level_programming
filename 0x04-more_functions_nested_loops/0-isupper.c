#include "holberton.h"
#include "main.h"
/**
 * main -main block
 * A  function that checks for uppercase character.
 *Prototype: int _isupper(int c)
 *Returns 1 if c is uppercase
 *Returns 0 otherwise
 *Return: int
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
