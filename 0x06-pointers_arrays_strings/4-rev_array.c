#include "holberton.h"
#include "main.h"

/**
 * A function that reverses the content of an array of integers
 * Prototype: void reverse_array(int *a, int n);
 * Where n is the number of elements of the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;
	int *init, *final;
	int aux = 0;

	init = a;
	final = a;
	n -= 1;
	while (i < n)
		i += 1;
	while (j <= i)
	{
		aux = *(init + j);
		*(init + j) = *(final + i);
		*(final + i) = aux;
		j++;
		i--;
	}
}
