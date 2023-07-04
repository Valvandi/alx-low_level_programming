#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_chessboard - function to print chessboard
 *
 * @a: function parametr
 *
 * i: paramter
 *
 * j: parameter
 *
 */
void print_chessboard(char (*a)[8])
{
	int i, j = 0;
	int rows;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
			putchar(' ');
		}
		putchar('\n');
	}

}
