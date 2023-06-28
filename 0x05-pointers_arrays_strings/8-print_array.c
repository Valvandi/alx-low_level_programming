#include <stdio.h>
#include "main.h"
/**
 * print_array - function to print array elements
 *
 * @a: function arg
 *
 * @n: function arg
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");

}

