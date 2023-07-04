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
 */
void print_chessboard(char (*a)[8])
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			putchar(a[i][j]);

		}
		putchar('\n');
	}

}

