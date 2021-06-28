#include <stdio.h>
/**
 * main - alphabet in lovercase with \n
 *
 * Return: 0
 **/

int main(void)

{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
