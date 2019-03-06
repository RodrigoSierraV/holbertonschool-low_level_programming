#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: No. of arguments
 * @av: string of aguments
 *
 * Return:  pointer to a new string
 */
char *argstostr(int ac, char **av)
{
  
  int i = 0, j = 0;
  char **aux;

  if (ac == 0)
    return (NULL);
  aux = malloc(ac * sizeof(char));
  if (aux == NULL)
    return (NULL);
  printf("%d %s\n", ac, *av);
  while (i < ac)
    {
      j = 0;
      while (*(*(av + i) + j) != '\0')
	{
	  *(*(aux + i) + j) = *(*(av + i) + j);
	j++;
	}
      i++;
    }
  return (*aux);
}
