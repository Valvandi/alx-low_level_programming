#include "main.h"
/**
 * _isalpha - checks for alphabet
 *
 * @c: param
 *
 * Return: always 0
 *
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
