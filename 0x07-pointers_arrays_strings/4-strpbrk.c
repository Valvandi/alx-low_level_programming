#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * @*_strpbrk - function that searches for any of a set of bytes
 *
 * @s: function paramter
 *
 * @accept: function parameter
 *
 * Return: always return desirable output
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}

