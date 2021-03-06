#include <stdio.h>

/**
 * main -  prints its name, followed by a new line.
 * @argc: integer that contains the count of arguments
 * @argv: array of null-terminated strings representing
 * command-line arguments entered
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	if (argv != '\0')
	{
		argc--;
		printf("%d\n", argc);
	}
	return (0);
}
