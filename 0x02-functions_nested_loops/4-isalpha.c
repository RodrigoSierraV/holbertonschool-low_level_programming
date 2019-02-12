#include "holberton.h"
/**
 *_isalpha - checks for lowercase character
 *@c: ASCII value for the tested character
 * Return: 1 if it's a letter, otherwise 0
 */
int _isalpha(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
