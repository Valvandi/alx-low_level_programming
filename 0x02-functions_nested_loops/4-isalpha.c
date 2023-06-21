#include "main.h"
/**
 * _isalpha - checks if character is letter, lowercase or uppercase
 *
 * Return: 1 if c is a letter, lowercase or uppercase else return 0
 *
 * @c: variable asignment
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);

	}

	return (0);
}
