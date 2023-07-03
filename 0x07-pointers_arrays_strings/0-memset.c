#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * @*_memset - function to fill n bytes of the memory area
 *
 * @s: function parameter
 *
 * @b: function parameter
 *
 * @n: function parameter
 *
 * Return: returns memset value
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (void *memset(void *s, int b, size_t n));


}

