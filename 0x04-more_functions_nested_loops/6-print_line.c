#include "main.h"

/**
 *print_line - prints straight line
 *@n: integer
 *Return: no return value
*/

void print_line(int n)
{
        char i;

        if (n <= 0)
        {
                _putchar('\n');
        }

        for (i = 1; i <= n; i++)
        {
                putchar('');
        }
        _putchar('\n');

}
