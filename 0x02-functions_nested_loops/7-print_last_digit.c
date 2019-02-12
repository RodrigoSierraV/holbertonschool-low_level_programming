#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: Given number to extract the last digit
 * Return: last digit
 */
int print_last_digit(int n)
{
int resultado;
if (n >= 0)
{
resultado = n % 10;
_putchar(resultado % 10 + '0');
return (resultado);
}
else
{
resultado = -n % 10;
_putchar(resultado % 10 + '0'); 
return (resultado);
}
}
