#include <stdio.h>
/**
 * main - program that prints all possible combinations of single-digit numbers
 *
 * Return: 0
 */

int main(void)

{
	int a;

	for (a = 0; a < 10; a++)
	{
		if (a != 9)
			continue;

	putchar (',');
	putchar (' ');

	}

	putchar ('\n');

	return (0);
}
