#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isdigit - checks for digit (0 through 9)
 *
 * Return: 1 if c is a digit and 0 if otherwise
 *
 * @c: int variable argument
 */

int _isdigit(int c)
{
	for (c = 0; c <= 9; c++){

		if (isdigit(c))
		{
			return(1);
		}
		else
		{
			return(0);
		}
		return (c);
	}
}
