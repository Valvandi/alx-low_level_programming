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
	int size = strlen(s);
	int i = 0;
	int end = size - 1;

	while (i < end)
	{
		char word = s[i];

		s[i] = s[end];
		s[end] = word;

		i++;
		end--;
	}

}

