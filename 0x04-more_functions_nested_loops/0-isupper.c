#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks for uppercase character
 *
 * Return: 1 if c is uppercase else return 0
 *
 * @c: variable
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{

		return (0);
	}

}

