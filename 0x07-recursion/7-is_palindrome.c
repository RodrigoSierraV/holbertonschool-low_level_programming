#include "holberton.h"
#include <stdio.h>
/**
 * endpointer - finds length of s
 * @s: pointed string to measure
 * @len: counter of characters in s
 * Return: number of characters in s
 */
char *rever(char *s, char *rev)
{
	if (*s != '\0')
	{
	  printf("%c", *(s + 1));
	  rever((s + 1), rev);
		*rev = *s; 
	}
	printf("%s", rev);
	return (rev);
}
/**int compare(char *s, int length, int len, char inicio, char fin)
{
  inicio = *s;
  fin = *(s + endpointer(s, len);
	  s++;

  printf("%d %d\n %s\n", length, len, s);
  return (0);
}*/
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: pointed string to compare
 * Return: integer
 */
int is_palindrome(char *s)
{
	
	
	char *rev = 0;
	
	rever(s, rev);
	return (0);
}
