#include "main.h"

/**
 * mul - a program that multiplies two positive numbers
 * @a: num1 and num2 will be passed in base 10
 * @b: num1 and num2 should only be composed of digits
 * Return: int.
 */

unsigned int mult(unsigned int num1, unsigned int num2)
{
    unsigned int counter=0;
    unsigned int mult = num1;
    if(num1 == 0 || num2 == 0)
    {
    return 0;
    }
    while(counter < num2 )
    {
    counter = add(counter,1);
    mult = add(mult,num1);
    }
    return mult;
}
