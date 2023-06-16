#include <stdio.h>
/**
 * main - Entry point of the code
 *
 * Return: Always return 0 (Success)
 *
 */
int main(void)
{
	printf("%lu size of a char:", sizeof(char));
	printf("%lu size of a int:", sizeof(int));
	printf("%lu size of a long int:", sizeof(long int));
	printf("%lu size of a long long", sizeof(long long));
	printf("%lu size of a float:", sizeof(float));

	return (0);
}
