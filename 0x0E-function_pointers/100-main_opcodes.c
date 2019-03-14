#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own main function.
 *
 * @argc: number of arguments from command-line
 * @argv: array of arguments from command-line
 * Return: nothing
 *
 */
int main(int argc, char *argv[])
{
	int i = 0;
	void *arguments;

	arguments = (void *)&main;
	if (argc > 2)
	{
	printf("Error\n");
	exit(2);
	}
	if (atoi(argv[1]) < 0)
	{
	printf("Error\n");
	exit(2);
	}
	while (i < atoi(argv[1]))
	{
	printf("%x", *((int *)arguments + i));
	printf(" ");
	i++;
	}
	putchar('\n');
}
