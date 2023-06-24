#include <stdio.h>
/**
 * print_line - check code
 *
 * @n: variable argument
 *
 *
 */

void print_line(int n)
{
	if (n <= 0)
	{
		putchar('\n');
		return;
	}

	while (n > 0)
	{
		putchar('_');
		n--;

	}

	putchar('\n');

}
