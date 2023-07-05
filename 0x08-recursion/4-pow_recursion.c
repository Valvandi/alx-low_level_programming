#include <stdio.h>
#include "main.h"
#include <string.h>
#include <math.h>
/**
 * _pow_recursion - function to check code
 *
 * @x: function parameter
 *
 * @y: function parameter
 *
 * Return: desired parameter
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	return (x ^ y);
}
