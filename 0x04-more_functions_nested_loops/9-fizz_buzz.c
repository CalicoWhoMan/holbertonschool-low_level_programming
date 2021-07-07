#include "holberton.h"
#include <stdio.h>
/**
 * main - descrip for the main function
 *
 * Return: 0
 */

int main(void)

{
int num;
for (num = 1; num <= 100; num++)
{

	if (num % 3 && num % 5 == 0)
	{
		printf("FizzBuzz");
	}

	else if (num % 3 == 0)
	{
		printf("Fizz");
	}
	else if (num % 5 == 0)
	{
		printf("Buzz");
	}
	else
	{
		printf("%i", num);
	}
	if (num < 100)
	{
		printf(" ");
	}
	else
	{
		printf("\n");

	}
}
	return (0);
}
