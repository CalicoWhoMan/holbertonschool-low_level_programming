#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
#include <stdarg.h>
#include <string.h>
#include <stddef.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct format_specifiers - name
 * @s: string
 * @f: funct
 */

typedef struct format_specifiers
{
char *s;
void (*f)();
} format_t;

#endif /* "VARIADIC_FUNTIONS" */
