#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
  char buffer[] = "Holberton ! #CisAwesome\0And this is the rest of the #buffer\0\0\0\0\0\0\0:) #cisfun\n\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x20\x21\x34\x56#pointersarefun #infernumisfun\n";

  printf("%s\n", buffer);
  printf("---------------------------------\n");
  print_buffer(buffer, sizeof(buffer));
  return (0);
}
