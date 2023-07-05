#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - function to check code
 *
 * @s: function variable
 *
 * length: parameter
 *
 * i: pramater
 */
void _print_rev_recursion(char *s)
{
	int length = strlen(s);

	for (int i = length - 1; i > 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');

}
