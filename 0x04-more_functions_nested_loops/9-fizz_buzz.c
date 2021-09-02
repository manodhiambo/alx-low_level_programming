#include <stdlb.h>
#include <stdio.h>
#include "holberton.h"
#include "main.h"

/**
 * main - main block
 * The “Fizz-Buzz test” is an interview question designed to help filter
 * out the 99.5% of programming job candidates who can’t seem to program
 * their way out of a wet paper bag
 * A  program that prints the numbers from 1 to 100, followed by a new line
 *For multiples of 3 prnt Fizz instead of no. and for the multiples 5 prnt.Buzz
 * For numbers which are multiples of both three and five print FizzBuzz
 * Each number or word should be separated by a space
 * You are allowed to use the standard library
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz ");
		else if (num % 3 == 0 && num % 5 != 0)
			printf("Fizz ");
		else if (num == 100)
			printf("Buzz ");
		else if (num % 5 == 0 && num % 3 != 0)
			printf("Buzz ");
		else 
			printf("%d ", num);
	}
	printf("\n");
	return (0);
}
