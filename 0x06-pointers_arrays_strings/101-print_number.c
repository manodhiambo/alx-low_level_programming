#include "holberton.h"

/**
 * A  function that prints an integer
 * Prototype: void print_number(int n);
 * You can only use _putchar function to print
 * You are not allowed to use long
 * You are not allowed to use arrays or pointers
 * You are not allowed to hard-code special values
 * Return: int
 */

void print_number(int n)
{
	 int n = 0;
    while(n <= 99)
    {
        if(n < 10)
        {
            putchar((char)i/10 + '0');
            putchar((char)n%10 + '0');
            putchar('\n');
        }
        n++;
    }
}
