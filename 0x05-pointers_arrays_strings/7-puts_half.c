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
	int index;

	for (i = 0; i <= length; i++)
	{
		if (length % 2 == 0)
		{
			index = (length / 2);

		}
		else
		{
			index = (length - 1 / 2);

		}
		printf("%s\n", str + index);
	}
}

