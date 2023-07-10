#include "main.h"
/**
 * _memset - fill a block of memory
 *
 * @s: function argument
 *
 * @b: function argument
 *
 * @n: function argument
 *
 * Return: return value s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
