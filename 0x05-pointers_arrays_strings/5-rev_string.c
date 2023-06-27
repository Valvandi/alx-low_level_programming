#include <stdio.h>
#include "main.h"
/**
 * rev_string - check code
 *
 * @s: function argument
 *
 */
void rev_string(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		printf("%d\n", s[i]);

	}
	return (0);

}

