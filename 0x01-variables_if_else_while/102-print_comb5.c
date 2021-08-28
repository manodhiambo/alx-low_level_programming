#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Write a program that prints all possible combinations of two two-digit numbers.
*The numbers should range from 0 to 99
*The two numbers should be separated by a space
*All numbers should be printed with two digits. 1 should be printed as 01
*The combination of numbers must be separated by comma, followed by a space
*The combinations of numbers should be printed in ascending order
*00 01 and 01 00 are considered as the same combination of the numbers 0 and 1
*You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
*You can only use putchar eight times maximum in your code
*You are not allowed to use any variable of type char
*All your code should be in the main function
*Return: 0
*/
int main(void)
{
	int i, j;
	int a, b, c, d;
	for (i = 0; i < 100; i++)
	{
		a = i / 10; /* doubles fnum */
		b = i % 10; /* singles fnum */
		for (j = 0; j < 100; j++)
		{
			c = j / 10 /* doubles fnum */
				d = j % 10; /* single fnum */
			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(32);
				putchar(c + '0');
				putchar(d + '0');

				if (!(a == 9 && b == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);

	return (0);
}

