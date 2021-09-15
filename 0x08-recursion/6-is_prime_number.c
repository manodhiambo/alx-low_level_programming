#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * otherwise return 0
 * @n: input number
 *
 * Return: int
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (getNumPrim(n, 2));
}

