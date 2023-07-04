#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_diagsums - function to check code
 *
 * @a: function param
 *
 * @size: function param
 *
 * sum_1: variable
 *
 * sum_2: variable
 */
void print_diagsums(int *a, int size)
{
	int sum_1;
	int sum_2;

	for (int i = 0; i < size; i++)
	{
		sum_1 += *(a + i * size + i);
	}

	for (int j = 0; j < size; j++)
	{
		sum_2 += *(a + i * size + (size - 1 - i));

	}
	putchar(sum_1);
	putchar(sum_2);

}
