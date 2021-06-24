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

	printf("Size of char: %zu byte\n", sizeof(charType));
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of longint: %zu bytes\n", sizeof(longint));
	printf("Size of longlongint: %zu bytes\n", sizeof(longlongint));
	printf("Size of float: %zu bytes\n", sizeof(floatType));

	return (0);
}
