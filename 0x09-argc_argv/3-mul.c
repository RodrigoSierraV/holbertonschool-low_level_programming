#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints its name, followed by a new line.
 * @argc: integer that contains the count of arguments
 * @argv: array of null-terminated strings representing
 * command-line arguments entered
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int firstint = 0;
	int secondint = 0;

	if (argc == 3)
	{
		firstint = atoi(argv[1]);
		secondint = atoi(argv[2]);
		printf("%d\n", (firstint * secondint));
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
