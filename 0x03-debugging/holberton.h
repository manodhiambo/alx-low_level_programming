#include "holberton.h"
/**
* main - Entry point
* write a program tha prints Holberton, followed by a new line.
* Return: Always (Success)
*/
int main(void)
{
	char *sh = "Holberton";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');
return (0);
}
