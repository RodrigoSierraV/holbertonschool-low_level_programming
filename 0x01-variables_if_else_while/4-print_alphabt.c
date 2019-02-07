#include <stdio.h>
/**
 *main - prints alphabet in lowercase without e and q
 * Return: 0
 */
int main(void)
{
char c;
	for (c = 'a'; c <= 'z'; ++c)
	{
	if (c != 'e' && c != 'q')
	{
	putchar(c);
	}
	}
	putchar('\n');
	return (0);
}
