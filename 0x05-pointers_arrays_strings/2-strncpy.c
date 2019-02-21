#include "holberton.h"
#include <stdio.h>
/**
 * *_strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @src: given string to be copied
 * @dest: buffer to create the copy of src
 * @n: size of src
 * Return: string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int destlen = 0;

	while (*(dest + destlen) != '\0')
	{
		destlen++;
	}
	for (i = 0; i < n; i++)
	  {
	    if (*(src + i) != '\0')
	      {
		*(dest + i) = *(src + i);
	      }
	  }
	for( ; i < n; i++)
	  *(dest + i) = '\0';
	return (dest);
	/*for (i = 0; i < n; i++)
	  {
	    b = destlen + i;
	    *(dest + b) = *(src + i);
	  }
	b = destlen + n + 1;
	*(dest + b) = '\0';
	return (dest);*/
}
