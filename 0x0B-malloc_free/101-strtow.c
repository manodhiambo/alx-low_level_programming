#include <stdio.h>
#define TRUE 1

/**
 * a function that splits a string into words
 * function returns a pointer to an array of strings (words
 * Each element of this array should contain a single word, null-terminated
 * The last element of the returned array should be NULL
 * Words are separated by spaces
 * Returns NULL if str == NULL or str == ""
 * Prototype: char **strtow(char *str);
 * Return: char
 */

char **strtow(char *str)
{
	char n=0,i,j=0;
	
	for(i=0;TRUE;i++)
	{
		if(strtow[i]!=' '){
			str[n][j++]=str[i];
		}
		else{
			str[n][j++]='\0';
			n++;
			j=0;
		}
		if(strtow[i]=='\0')
		    break;
	}
	return n;
	
}
int main()
{
	int n; 
	int i; 
	char str[]="This is Kevin";
	char strtow
	
	n=**strtow(str,arr);
	
	for(i=0;i<=n;i++)
		printf("%s\n",arr[i]);
	
	return 0;
}
