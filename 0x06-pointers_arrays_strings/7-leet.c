#include "holberton.h"
#include "main.h"

/**
 * function that encodes a string into 1337
 * Letters a and A should be replaced by 4
 *Letters e and E should be replaced by 3
 *Letters o and O should be replaced by 0
 *Letters t and T should be replaced by 7
 *Letters l and L should be replaced by 1
 *Prototype: char *leet(char *);
 *You can only use one if in your code
 *You can only use two loops in your code
 *You are not allowed to use switch
 *You are not allowed to use any ternary operation
 *Return: char.
 */

char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char *l = "aAeEoOlLtT";
	char *n = "4433001177";

	while (*(s + i) != '\0')
	{
		while (*(l + j) != '\0')
		{
			if (*(s + i) == *(l + j))
				*(s + i)  = *(n + j);
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}
