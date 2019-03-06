#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_tab - Prints an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */
char **strtow(char *str)
{
  int len = 0, i = 0;
  char **aux;
  
  while (str[len])
      len++;
  printf("%d", len);
  aux = malloc(len);
  while (i < len)
    {
    aux[i] = str[i];
  return (aux);
}
