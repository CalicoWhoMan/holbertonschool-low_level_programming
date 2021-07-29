#include "3-calc.h"

/**
 * main - program that performs simple operations :)
 * @argc: countt
 * @argv: vector
 * Return: 0
 */

int main(int argc, char **argv)

{
int (*shi)(int, int);

if (argc == 4 && strlen(argv[2]) == 1)
{
if (strstr("+-/*%", argv[2]) == NULL)
{
printf("Error\n");
return (0);
}
if ((*argv[2] == '%' || *argv[2] == '/') && atoi(argv[3]) == 0)
{
printf("Error\n");
return (0);
}
shi = get_op_func((argv[2]));
printf("%i\n", shi(atoi(argv[1]), atoi(argv[3])));
}
else
{
printf("Error\n");
}
return (0);
}
