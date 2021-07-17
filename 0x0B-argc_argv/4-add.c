#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that multiplies two numbers
 * @argc: content
 * @argv: values
 * Return: something
 */

int main(int argc, char *argv[])
{
int i;
int x;
int sum = 0;

for (i = 1; i < argc; i++)
{
	for (x = 0; argv[i][x]; x++)

	{
	printf("sum = argv[i][x]");
	if (!isdigit(argv[i][x]))
	{
		printf("Error\n");
		return (1);
	}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
