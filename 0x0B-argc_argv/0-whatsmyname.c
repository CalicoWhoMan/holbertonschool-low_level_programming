#include <stdlib.h>
#include <stdio.h>

/**
 * main: function 
 * @argc: integer
 * @argv: string value
 * 
 * Return: 0
 */

int main(int argc, char* argv[])
{
int i;

for(i = 0; i < argc; i++)
{
printf("%s\n", argv[0]);
}
return 0;
}
