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

	if (*s == '\0')
	{
		return;

	}

	_print_rev_recursion(s + 1);

	putchar(*s);

}
