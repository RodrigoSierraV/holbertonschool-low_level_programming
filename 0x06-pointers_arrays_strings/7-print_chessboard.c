#include "holberton.h"
/**
 * print_chessboard - prints the chessboard.
 * @a: position of the pieces
 */
void print_chessboard(char (*a)[8])
{
	int rows = 0;
	int columns = 0;

	while (rows < 8)
	{
		columns = 0;
		while (columns < 8)
		{
			_putchar(a[rows][columns]);
			columns++;
		}
		rows++;
		_putchar('\n');
	}
}
