#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"

/**
 * get_op_func - Function to select the correct function
 * to print according with an identifier
 * @s: pointer to the identifier
 * Return: pointer to a function that prints
 */
int (*get_op_func(char *s))(va_list str)
{
	int i = 0;
	op_t ops[] = {
	{"c", printchar},
	{"s", printstring},
	{"d", printdigit},
	{"i", printdigit},
	{NULL, NULL}
	};

	while (i < 4)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}
}
