#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * *_memset - fill memory with constant byte
 *
 * @s: memory area to be filled
 *
 * @n: number of times to copy b
 *
 * @b: function param
 *
 * Return: pointer to the memory area s
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * *_calloc - allocate memory for an array
 *
 * @nmemb: number of elements in the array
 *
 * @size: size of each element
 *
 * Return: always 0
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
