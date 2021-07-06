#include "holberton.h"

/**
 * rev_string - reverses a string
 *  @s: string
 *
 */

void rev_string(char *s)

{

	int len = 0, str = 0;
	char rev;

	while (s[str++])
		len++;

	for (str = len - 1; str >= len / 2; str--)

	{
		rev = s[str];
		s[str] = s[len - str - 1];
		s[len - str - 1] = rev;
	}
}
