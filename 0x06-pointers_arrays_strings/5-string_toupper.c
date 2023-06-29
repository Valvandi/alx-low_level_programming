#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * string_toupper - string to change lowercase to uppercase
 *
 * @n: a pointer
 *
 * Return: returns value of choice
 */
char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;

	}
	return (n);




}
