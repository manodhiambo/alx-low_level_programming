#include "holberton.h"
#include "main.h"

/**
 * A function that encodes a string using rot13.
 * Prototype: char *rot13(char *);
 * You can only use if statement once in your code
 * You can only use two loops in your code
 * You are not allowed to use switch
 * You are not allowed to use any ternary operation
 * Return: char
 */

char *rot13(char *)
{
	if('a' <= char * && char * <= 'z'){
    return *rot13b(char *,'a');
  } else if ('A' <= char * && char * <= 'Z') {
    return *rot13b(char *, 'A');
  } else {
    return char *;
  }
}

char *rot13b(char *, char * basis){
  c = (((char *-basis)+13)%26)+basis;
  return char *;
}

char * main() {
  printf("The given args will be rotated");
  char *;
  while((char * = getchar()) != EOF){
    char * = *rot13(char *);
    putchar(char *);
  }
  return 0;
}
