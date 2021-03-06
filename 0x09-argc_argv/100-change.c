#include <stdio.h>
#include <stdlib.h>

/**
 * main -   prints the minimum number of coins to make
 * change for an amount of money.
 * @argc: integer that contains the count of arguments
 * @argv: array of null-terminated strings representing
 * command-line arguments entered
 * Return: 1 if no arguments or 0
 */
int main(int argc, char *argv[])
{
	int modulo = 0;
	int div = 0;
	int i = 0;
	int change = 0;
	int changers[] = {25, 10, 5, 2, 1};

	if (argc == 2)
	{
		if (atoi(argv[1]) < 0)
		{
			printf("0\n");
			return (0);
		}
		modulo = atoi(argv[1]) % changers[i];
		div = atoi(argv[1]) / changers[i];
		change = div;
		i++;
		while (i < 5)
		{
			div = modulo / changers[i];
			change += div;
			modulo = modulo % changers[i];
			i++;
		}
		printf("%d\n", change);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
