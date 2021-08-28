#include <stio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * prints all single digit numbers of base 10 starting from 0
 * using purchar function, dont use char variable type
 * Return: 0
 */
int main(void)
{
	int i;
	for (i = 0; i <= 9; i++)
		purchar(i + '0');
	purchar('\n');
	return (0);
}
