#include <stdio.h>
#include <stdlib.h>

/**
 * A  function that prints an integer
 * Return: int
 */

void print_number(int n)
{
	if (n < 0) {
       putchar('-');
       n = -n;
   }

   if (n == 0)
      putchar('0');

   if (n/10)
      print_number(n/10);

   putchar(n%10 + '0');
}

int main(int argc, char** argv)
{
   int n = atoi(argv[1]);
   print_number(n);
   printf("\n");
}
