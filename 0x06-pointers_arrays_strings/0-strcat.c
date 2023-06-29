#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * @*_strcat - function to concatenate strings
 *
 * @dest: function argument
 *
 * @src: function argument
 *
 * Return: Always 0
 *
 */
char *_strcat(char *dest, char *src)
{
	char str_len = strlen(dest);

	strcat(dest + str_len, src);

	return (dest);
}



