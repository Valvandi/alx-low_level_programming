#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * @*_strstr - function to locate a substring
 *
 * @haystack: function parameter
 *
 * @needle: function parameter
 *
 * Return: returns a desirable output
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
