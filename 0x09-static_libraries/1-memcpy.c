#include "main.h"
/**
 * _memcpy - fucntion to copy memory area
 *
 * @dest: parameter
 *
 * @src: parameter
 *
 * @n: parameter
 *
 * Return: return dest
 *
 *
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
