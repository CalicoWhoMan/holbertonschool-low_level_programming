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
int i, j;
char and[13] = {
' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'
};

for (i = 0; n[i] != '\0'; i++)
{
if (i == 0 && n[i] >= 'a' && n[i] <= 'z')
n[i] -= 32;
for (j = 0; j < 13; j++)
{
if (n[i] == and[j])
{
if (n[i + 1] >= 'a' && n[i + 1] <= 'z')
{
n[i + 1] -= 32;
}
}
}
}
return (n);
}
