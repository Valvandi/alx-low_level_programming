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
		_putchar('\n');
		return;
	}

	while (n > 0)
	{
		_putchar('_');
		n--;

	}

	_putchar('\n');

}
