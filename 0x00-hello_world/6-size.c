#include <stdio.h>
/**
 * main - Entry point of the code
 *
 * Return: Always return 0 (Success)
 *
 */
int main(void)
{
	printf("size of a char: %zu\n", sizeof(char));
	printf("size of an int: %zu\n", sizeof(int));
	printf("size of a long int: %zu\n", sizeof(long int));
	printf("size of a long long: %zu\n", sizeof(long long));
	printf("size of a float: %zu\n", sizeof(float));

	return (0);
}
