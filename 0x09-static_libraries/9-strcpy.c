#include "main.h"
/**
 * _strcpy - copy's the string pointer
 *
 * @dest: param
 *
 * @src: param
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
