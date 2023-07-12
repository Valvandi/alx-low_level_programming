#include <stdio.h>
#include "main.h"
/**
 * _putchar - checks code
 *
 * @c: function arg
 *
 * Return: always 0
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
