#include "main.h"

/**
 * @function that compares two strings
 * @ returns 1 if the strings can be considered identical
 * @otherwise return 0
 * Return: int
 */

int wildcmp(char *s1, char *s2);
{
	char *s1[] = {"tutorials point"};
   char *s2[] = {"tutorials point"};
   /*comparing two strings*/
   if (strcmp(*s1, *s2) == 0)
      return(1);
   else
      return(0);
      return 0;
}
