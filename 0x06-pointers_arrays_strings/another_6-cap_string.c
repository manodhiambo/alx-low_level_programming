#include "holberton.h"
#include "main.h"

/**
 * A function that capitalizes all words of a string
 * Prototype: char *cap_string(char *);
 * Separators of words: space, tabulation, 
 * new line, ,, ;, ., !, ?, ", (, ), {, and }
 * Return: char
 */

char *cap_string(char *ch)
{
	int i = 0;

	while (*(ch + i) != '\0')
	{
		if (i == 0)
			*(ch + i) = *(ch + i) - ' ';
		if (*(ch + i) == ' ' || *(ch + i) == '\t')
			i++;
		else if (*(ch + i) == '\n' || *(ch + i) == ',')
			i++;
		else if (*(ch + i) == ';' || *(ch + i) == '.')
			i++;
		else if (*(ch + i) == '!' || *(ch + i) == '?')
			i++;
		else if (*(ch + i) == '"' || *(ch + i) == '(')
			i++;
		else if (*(ch + i) == ')' || *(ch + i) == '{')
			i++;
		else if (*(ch + i) == '}')
			i++;
		if (*(ch + i) >= 97 && *(ch + i) <= 122)
		{
			*(ch + i) = *(ch + i) - ' ';
			i++;
		}
	}
	return (ch);
}
