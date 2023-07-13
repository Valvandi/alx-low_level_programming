#include "main.h"
#include <unistd.h>
/**
 * _putchar - check code
 *
 * @c: function argument
 *
 * Return: always 0
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
