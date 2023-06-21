#include "main.h"
/**
 * print_sign - checks the code
 *
 * Return: 1 if n > 0 and 0 if n = 0 and -1 if n < 0
 *
 * @n: variable
 */

int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		_putchar('+');
		value = 1;
	}
	else if (n = 0)
	{
		_putchar('0');
		value = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		value = -1;
	}

	return value;

}




