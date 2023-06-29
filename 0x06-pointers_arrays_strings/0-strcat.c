#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * @*_strcat - function to concatenate strings
 *
 * @dest: function argument
 *
 * @src: function argument
 *
 * Return: Always 0
 *
 * @ptr: initialized pointer
 */
char *_strcat(char *dest, char *src)
{
	char *ptr;

	ptr = strcat(dest, src);

	return (ptr);
}



