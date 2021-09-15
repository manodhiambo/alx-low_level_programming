#include "main.h"

/**
 * @function that compares two strings
 * @ returns 1 if the strings can be considered identical
 * @otherwise return 0
 * Return: int
 */

int wildcmp(char *s1, char *s2);
{
	{
	if (*s1 == '\0')
		return (0);
	s1++;
	return (1 + wildcmp);
}

/**
 * get identity - check if is 0 or 1
 * @s: input string
 * @identity
 * Return: int
 */

int identitical(char *s1, char *s2)
{
	if (*s1 != *(s1 + s2 - 1))
		return (0);
	else if (*s1 == '\0')
		return (1);
	return (identical(s1 + 1, s2 - 2));
}

/**
 * is_identical - returns 1 if a string is identical and 0 if not.
 * @s: input char
 *
 * Return: int
 */

int is_identical(char *s)
{
	int *s2;

	*s2 = wildcmp;
	if ((*s2) <= 1)
		return (1);
	return (identical(s1, s2));
}
