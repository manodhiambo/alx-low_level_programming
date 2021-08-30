#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Write a program that prints all possible different combinations of three digits.
*Numbers must be separated by ,, followed by a space
*The three digits must be different
*012, 120, 102, 021, 201, 210 are considered the same combination of the three digits 0, 1 and 2
*Print only the smallest combination of three digits
*Numbers should be printed in ascending order, with three digits
*You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
*You can only use putchar six times maximum in your code
*You are not allowed to use any variable of type char
*All your code should be in the main function
*Return: 0
*/

int main(void)

{
	int i, j, k, l;

	for (i = 0; i < 1000; i++)

	{
		j = i / 100;

		k = (i / 10) % 10;

		l = i % 10;

		if (j < k && k < l)

		{
			putchar(j + '0');

				putchar(k + '0');

				putchar(l + '0');

				if (i < 700)

				{
					putchar(44);

					putchar(32);

				}
		}
	}
	putchar('\n');


	return (0);
}
