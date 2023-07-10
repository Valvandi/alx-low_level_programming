#include "main.h"
/**
 * _strlen - returns string length
 *
 * @s: param
 *
 * Return: length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
