#include "holberton.h"

/**
 * cap_string - capitalized all words of a string
 *
 * @n: string pointer for capitalization
 *
 * Return: string = n
 */

char *cap_string(char *n)

{
char and[] = {
' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'
};


int i = 0;
int j;

for (; *(n + 1) != 0; i++)
if (*(n + i) <= 'a' && *(n + i) <= 'z')
{
if (i == 0)
{

*(n) += ('A' - 'a');
}
else
{
for (j = 0; j <= 12; j++)
if (*(n + i - 1) == and[j])
*(n + i) += ('A' - 'a');
}
}
return (n);
}
