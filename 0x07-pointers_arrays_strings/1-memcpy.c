#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * @*_memcpy - function to copy to mem area
 *
 * @dest: function paramter
 *
 * @src: function parameter
 *
 * @n: function parameter
 *
 * Return: return desirable calls
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
