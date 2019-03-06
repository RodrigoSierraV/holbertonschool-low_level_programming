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

	int i = 0, j = 0, k = 0;
	char *aux;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			k++;
			j++;
		}
		i++;
		k++;
	}
	aux = malloc((k - 3) * sizeof(char *));
	if (aux == NULL)
		return (NULL);
	i = 0;
	j = 0;
	k = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			aux[k] = av[i][j];
			k++;
			j++;
		}
		aux[k] = '\n';
		i++;
		k++;
	}
	return (aux);
}
