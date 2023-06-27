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
	int i;
	int len = strlen(s);

	for (i = 0; i <= len; i--)
	{
		printf("%d\n", i);
	}

}

