#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * @*_strncpy - function that copies string
 *
 * @dest: function parameter
 *
 * @src: function parameter
 *
 * @n: function parameter
 *
 * Return: returns a value
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	dest[n] = '\0';

	return (dest);

}

