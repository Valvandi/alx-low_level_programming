#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strspn - check code
 *
 * @s: function parameter
 *
 * @accept: function parameter
 *
 * Return: always return desirable value
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}


