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

	for (i = 0; i < size;)
	{
		char j  = str[i];
		i += 2;
		putchar(j);

	}
	putchar('\n');

}
