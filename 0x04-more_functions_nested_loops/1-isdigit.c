#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isdigit - checks for digit (0 through 9)
 *
 * Return: 1 if c is a digit and 0 if otherwise
 *
 * @c: int variable argument
 *
 * @i: int variable
 */

int _isdigit(int c)
{
	int i;
	
	for (i = 0; i < 10; i++)
	{
		if ((isdigit(i)))
		{
			return (1);
		}
		else
		{
			return (0);

		}
		return (i);
	}
	
	return (i);

}
