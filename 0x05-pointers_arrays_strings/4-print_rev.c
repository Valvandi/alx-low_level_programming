#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_rev - function
 *
 * @s: parameter od function
 */
void print_rev(char *s)
{
	char i;
	char len = strlen(s);

	for (i = len-1 ; i >= 0; i--)
	{
		printf("%c\n", i);
	}

}

