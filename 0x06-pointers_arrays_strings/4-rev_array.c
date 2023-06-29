#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * reverse_array- function to reverse string
 *
 * @a: parameter
 *
 * @n: parameter
 *
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = temp;
		}
	}



}

