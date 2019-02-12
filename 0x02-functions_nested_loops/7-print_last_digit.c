#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: Given number to extract the last digit
 *
 * description: prints the last digit of a number
 * Return: last digit
 */
int print_last_digit(int n)
{
int resultado = n % 10;
if (n < 0)
{
_putchar(-resultado + '0');
 return (-resultado);
}
else
{
_putchar(resultado + '0');
return (resultado);
}
}
