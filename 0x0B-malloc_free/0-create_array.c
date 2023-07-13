#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - check code
 *
 * @size: function argument 
 *
 * @c: function argument
 *
 *
 */
char *create_array(unsigned int size, char c)
{

	if (size == NULL)
	{
		return (0);
	}
	char* array = (char*)malloc(size * sizeof(char));

	if (array != NULL)
	{
		for (unsigned int i = 0; i < size; i++)
		{
			array[i] = c;
		}
	}
	return array;
}
