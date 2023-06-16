#include <stdio.h>
/**
 * main - Entry point of the code
 *
 * Return: Always return 0 (Success)
 *
 */
int main(void)
{
	printf("size of a char: %zu\n", sizeof(char),"byte(s)");
	printf("size of an int: %zu\n", sizeof(int),"byte(s)");
	printf("size of a long int: %zu\n", sizeof(long int),"byte(s)");
	printf("size of a long long: %zu\n", sizeof(long long),"byte(s)");
	printf("size of a float: %zu\n", sizeof(float),"byte(s)");

	return (0);
}
