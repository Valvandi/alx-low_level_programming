#include <stdio.h>
#include "main.h"
/**
 * factorial- function to check code
 *
 * @n: function param
 *
 * Return: return desired output
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);

	}
	return (n * factorial(n - 1));
}

