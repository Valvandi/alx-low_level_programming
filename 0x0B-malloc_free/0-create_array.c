#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - check code
 *
 * @size: function argument
 *
 * @c: function argument
 *
 * Return: array
 */
char *create_array(unsigned int size, char c)
{

	if (size == 0)
	{
		return (NULL);
	}
	char *array = (char *)malloc(size * sizeof(char));

	if (array != NULL)
	{
		for (unsigned int i = 0; i < size; i++)
		{
			array[i] = c;
		}
	}
	return (array);
}
