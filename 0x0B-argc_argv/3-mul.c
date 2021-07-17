#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: content
 * @argv: values
 * Return: something
 */

int main(int argc, char *argv[])
{
if (argc != 3)
{
	printf("Error");
	return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
