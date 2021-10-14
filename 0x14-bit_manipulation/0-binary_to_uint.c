#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int len, exp = 0;
	unsigned int res = 0;

	if (b == NULL)
		return (0);
	len = _strlen(b);
	while (len-- && len >= 0)
	{
		if (b[len] == '1')
			res += _pow_recursion(2, exp);
		else if (b[len] != '0')
			return (0);
		exp++;
	}
	return (res);
}
