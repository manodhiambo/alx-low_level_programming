#include <stdio.h>
#include "holberton.h"
 
char buffer[200];
int i, j;
double fp;
char *b = "baltimore";
char c;
 
void print_buffer(char *b, int size)
{
   c = 'l';
   i = 35;
   fp = 1.7320508;
 
   /* Format and print various data */
   j = sprintf(buffer, "%s\n", s);
   j += sprintf(buffer+j, "%c\n", c);
   j += sprintf(buffer+j, "%d\n", i);
   j += sprintf(buffer+j, "%f\n", fp);
   printf("string:\n%s\ncharacter count = %d\n", buffer, j);
}
