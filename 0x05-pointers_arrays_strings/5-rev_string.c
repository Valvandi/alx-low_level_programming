#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * rev_string - check code
 *
 * @s: function argument
 *
 */
void rev_string(char *s)
{
	int i;

	for (i = 0; i < strlen(s) - 1; i++)
	{
		putchar(s[i]);

	}


}

