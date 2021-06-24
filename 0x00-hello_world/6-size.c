#include <stdio.h>
/**
 * main - echo the Programming... and return 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	long int longint;
	long long int longlongint;
	float floatType;

	printf("Size of a char: %zu byte\n", sizeof(charType));
	printf("Size of an int: %zu bytes\n", sizeof(intType));
	printf("Size of a long int: %zu bytes\n", sizeof(longint));
	printf("Size of a long long int: %zu bytes\n", sizeof(longlongint));
	printf("Size of a float: %zu bytes\n", sizeof(floatType));

	return (0);
}
