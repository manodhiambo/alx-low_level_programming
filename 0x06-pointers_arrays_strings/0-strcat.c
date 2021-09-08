#include "holberton.h"
#include "main.h"

/**
 * A function that concatenates two strings
 * This function appends the src string to the dest string, 
 * overwriting the terminating null byte (\0) at the end of dest, 
 * and then adds a terminating null byte
 * Returns a pointer to the resulting string dest
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	return (dest);
}
