#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * puts_half - check code
 *
 * @str: function variable
 *
 */
void puts_half(char *str)
{
	int i,n;
	int length = (strlen(str) - 1);
	int index = length / 2;
	char word;

	n = strlen(n);

	for (i = index + 1; i < n; i++)
	{
		if (length % 2 == 0)
		{
			word  = str[i];
			putchar(word);

		}
		else
		{
			word = str[i];
			putchar(word);

		}

	}
	putchar('\n');
}

