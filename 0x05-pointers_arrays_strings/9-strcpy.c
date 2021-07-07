#include "holberton.h"

/**
 * _strcpy - copies string pointed by src including null byte
 *  to the nuffer pointed to by dest
 *
 * @src: string
 * @dest: string
 * Return: destination
 */

char *_strcpy(char *dest, char *src)
{

int len = 0;

while (*(src + len) != 0)

{

	*(dest + len) = *(src + len);
		len++;
}

*(dest + len) = 0;

return (dest);

}
