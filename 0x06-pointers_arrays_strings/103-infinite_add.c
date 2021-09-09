#include <stdio.h>
#include <stdlib.h>

/**
 * A  function that adds two numbers.
 * Where n1 and n2 are the two numbers
 *r is the buffer that the function will use to store the result
 *size_r is the buffer size
 *The function returns a pointer to the result
 *You can assume that you will always get positive numbers, or 0
 *You can assume that there will be only digits in the strings n1 and n2
 *n1 and n2 will never be empty
 *If the result can not be stored in r the function must return 0
 *Return: 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int *n1, *n2, res;
 
   printf("\nEnter the two numbers : ");
   scanf("%d %d", &*n1, &*n2);
 
   res = sum(*n1, *n2);
 
   printf("nAddition of two number is : ");
   return (0);
}
 
int sum(int *n1, int *n2) {
   int *r;
   *r = *n1 + *n2;
   return (*r);
}
