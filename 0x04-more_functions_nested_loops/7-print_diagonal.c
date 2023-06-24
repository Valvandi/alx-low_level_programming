#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * print_diagonal - check code 
 *
 * @n: variable argument
 *
 *
 *
 */

void print_diagonal(int n )
{
	if (n <= 0)
	{
		putchar('\n');
		return;
	}

	int spaces = 0;
	while (spaces < n)
	{
		int i;
		for (i = 0; i < spaces; i++)
		{
			putchar(' ');
		}

		putchar('\\');
		putchar('\n');
		spaces++;
	}
}
