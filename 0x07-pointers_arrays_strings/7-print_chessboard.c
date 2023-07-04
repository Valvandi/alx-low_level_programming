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
	char board[8][8];

for (int i = 0; i < 8; i++)
{
	for (int j = 0; j < 8; j++)
	{
		putchar(board[i][j]);

	}
	putchar('\n');
}

}

