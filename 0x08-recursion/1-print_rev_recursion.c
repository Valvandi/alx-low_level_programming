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

	if (length >= 1)
	{
		putchar(s[length -1]);
		s[length - 1] = '\0';
		_print_rev_recursion(s);
		s[length - 1] = s[length];
	}


}
