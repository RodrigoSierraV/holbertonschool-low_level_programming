#include "holberton.h"
/**
 *_islower - checks for lowercase character
 *@c: ASCII value for the tested character
 * Return: 1 if lowercase, otherwise 0
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
