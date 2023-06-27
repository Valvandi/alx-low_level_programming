#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * puts2 - check code
 *
 * @str: function argument
 */
void puts2(char *str)
{
	int i;
	int size = strlen(str);

	for (i = 0; i <= size; i++)
	{
		putchar(str[i]);

	}

}
