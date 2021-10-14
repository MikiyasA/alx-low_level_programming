#include "variadic_functions.h"

/**
 * print_numbers - print n amount of numbers
 * @separator: separe no.
 * @n: numbers
 * Return: NA
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i, value;

va_start(args, n);

for (i = 0; i < n; i++)
{
value = va_arg(args, int);
printf("%d", value);

if (separator && i != n - 1)
{
printf("%s", separator);
}
}

va_end(args);
printf("\n");

}
