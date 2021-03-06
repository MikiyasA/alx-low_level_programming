#include "variadic_functions.h"

/**
 * print_strings - print unlimited string
 * @separator: separate strimgs
 * @n: int
 * Return: NA
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *strg;

va_start(args, n);

for (i = 0; i < n; i++)
{
strg = va_arg(args, char *);

if (strg)
printf("%s", strg);
else
printf("(nil)");

if (separator && i != n - 1)
{
printf("%s", separator);
}
}

va_end(args);
printf("\n");

}
