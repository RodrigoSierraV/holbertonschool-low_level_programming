


#include <stdio.h>
/**
 * main - Prints the first 98 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	unsigned long a = 0, resa = 0, resb = 0;
	unsigned long b = 1;
	int c;
	unsigned long add = 0, shortadd = 0;

	for (c = 0; c < 98; c++)
	{
		if (c >= 92)
		{
			if (c == 92)
			{
				resa = a % 1000;
				resb = b % 1000;
				a = a / 1000;
				b = b / 1000;
			}
			shortadd = resa + resb;
			add = a + b + (shortadd / 1000);
			printf("%lu%03lu", add, shortadd % 1000);
			resa = resb;
			a = b;
			resb = shortadd % 1000;
			b = add;
		}
		else
		{
			add = a + b;
			printf("%lu", add);
			a = b;
			b = add;
		}
		if (c < 97)
			printf(", ");
	}
	putchar('\n');
	return (0);
}
