#include "holberton.h"

/**
 * puts_half - print half of a string
 * @str: string
 */

void puts_half(char *str)
{

int beg = 0, mid = 0, end = 0;

while (str[beg] != 0)
beg++;
if (beg % 2 == 0)
mid = beg / 2;

else
mid = (beg + 1) / 2;
for (end = mid; end < beg; end++)
{
_putchar(str[end]);
}
{
_putchar('\n');
}
}
