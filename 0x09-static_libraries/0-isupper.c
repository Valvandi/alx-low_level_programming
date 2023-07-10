#include <stdio.h>
#include "math.h"
/**
 * _isupper - uppercasr letter
 *
 * @c: param
 *
 * Return: always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

