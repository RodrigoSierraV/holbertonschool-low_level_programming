#include <stdio.h>
#include <stdlib.h>

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

	if (argc > 1)
	{
		while (argv[i] != '\0')
		{
			if (atoi(argv[i]) != 0)
			{
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
