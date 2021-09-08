#include "holberton.h"
#include "main.h"

/**
 * A function that compares two strings
 * Your function should work exactly like strcmp
 * Return: char
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int aux;

	while (*(s1 + i) != '\0')
	{
		if (*(s1 + i) > *(s2 + i))
		{
			aux = *(s1 + i) - *(s2 + i);
			return (aux);
		}
		else if (*(s1 + i) < *(s2 + i))
		{
			aux = *(s1 + i) - *(s2 + i);
			return (aux);
		}
		i += 1;
	}
	return (0);
}
