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
	int i;
	int length = (strlen(str) - 1);
	int index = length / 2;
	char word;

	for (i = length; i < index; i++)
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

