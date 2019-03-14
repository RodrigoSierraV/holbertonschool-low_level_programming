#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "3-calc.h"
/**
 * main -  performs simple operations.
 * @argc: integer that contains the count of arguments
 * @argv: array of null-terminated strings representing
 * command-line arguments entered
 * Return: 0 or 1 if Error
 */
int main(int argc, char *argv[])
{
	int result = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	result = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
