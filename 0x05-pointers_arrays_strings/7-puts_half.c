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

	for (i = 0; i < length; i++)
	{
		if (length % 2 == 0)
		{
			word  = index;
			putchar(word);

		}
		else
		{
			word = 1 + index;
			putchar(word);

		}
		printf("%s\n", str + index);
	}
}

