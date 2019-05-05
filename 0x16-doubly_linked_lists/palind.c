#include "lists.h"
void main(void)
{
	int a = 0, b, number = 0, i = 0, pal = 0, test = 0;
	int store[6], comp = 0, palindrome = 0, z = 0;

	while (a < 1000)
	{
		b = 0;
		while (b < 1000)
		{
			number = a * b;
			test = number;
			i = 0;
			while (test)
			{
				store[i] = test % 10;
				test /= 10;
				i++;
			}
			z = i - 1;
			comp = 0;
			pal = 0;
			while (pal < i / 2)
			{
				if (store[pal] == store[z])
					comp++;
				else
					break;
				pal++;
				z--;
			}
			if (comp == i / 2)
				palindrome = number;
			b++;
		}
		a++;
	}
	printf("pal:%d a:%d b:%d\n", palindrome, a, b);
}
