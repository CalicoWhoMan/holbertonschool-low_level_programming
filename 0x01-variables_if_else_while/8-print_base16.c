#include <stdio.h>
/**
 * main - prints numbers of base 16 in lowercase
 *
 * Return: 0
 */

int main(void)

{
	int a;
	char b;

	for (a = 0; a < 10; a++)
	{
	putchar(a + '0');
	}
	for (b = 'a'; b <= 'f'; b++)
	{
		putchar (b);
	}
	putchar ('\n');

	return (0);
}
