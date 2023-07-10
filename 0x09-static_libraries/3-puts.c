#include "main.h"
/**
 * _puts - prints a string followed by newline to stdout
 *
 * @str: param
 *
 *
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
