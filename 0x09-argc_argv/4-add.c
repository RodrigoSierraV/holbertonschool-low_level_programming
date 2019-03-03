#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main -  adds positive numbers.
 * @argc: integer that contains the count of arguments
 * @argv: array of null-terminated strings representing
 * command-line arguments entered
 * Return: 0 or 1 if Error
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;
	int j = 0;

	if (argc > 1)
	{
		while (argv[i] != '\0')
		{
			if (atoi(argv[i]) > 0)
			{
				j = 0;
				while (argv[i][j] != '\0')
				{
					if (isdigit(argv[i][j]) == 0)
					{
						printf("Error\n");
						return (1);
					}
					j++;
				}
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
	}
	else
	{
		printf("0\n");
		return (0);
	}
	printf("%d\n", sum);
	return (0);
}
