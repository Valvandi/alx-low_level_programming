#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - function to check code
 *
 * @s: function variable
 *
 */
void _print_rev_recursion(char *s)
{
	int length = strlen(s);
	int i;

	for (i = length - 1; i > 0; i--)
		putchar(s[i]);
}
