#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * @*_strncat - function to concat strings
 *
 * @dest: function argument
 *
 * @src: function argument
 *
 * @n: function argument
 *
 * Return: returns value
 */
char *_strncat(char *dest, char *src, int n)
{
	char str_len = strlen(dest);

	strncat(dest + str_len, src, n);

	return (dest);

}
