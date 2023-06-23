#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * print_numbers - checks code
 *
 * Return: i at the end of program
 *
 * @i - variable declared in function
 *
 */

void print_numbers(void);
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar("%d", i);
		_putchar('\n');

	}
	return (i);

}

