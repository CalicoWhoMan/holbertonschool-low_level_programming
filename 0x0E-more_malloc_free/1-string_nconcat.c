#include "holberton.h"

/**
 * string_nconcat - func that concats two strings
 * @s1: string one
 * @s2: string two
 * @n: bytes
 * Return: s1 followed by n bytes of s2 and NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int a, b;
char *toget;

/*check if s1 is null */
if (s1 == NULL)
/*otherwise make empty sting*/
s1 = "";
/*check if s2 is null */
if (s2 == NULL)
/*otherwise make empty sting*/
s2 = "";
/*length of both strings */
strlen(s1);
strlen(s2);
/*If n is greater or equal to the length of s2 then use the entire string s2 */
if (n >= strlen(s2))
/*combining both strings into one plus null byte (bytes) */
toget = malloc(strlen(s1) + strlen(s2) + 1);
else
/*otherwise combine s1 plus n and null byte (bytes) */
toget = malloc(strlen(s1) + n + 1);
/*check if combined strings is NULL otherwise return NULL second step */
if (toget == NULL)
return (NULL);
}
