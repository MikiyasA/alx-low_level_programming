#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum unlimted emelent of in
 * @n: ints to be add
 * Return: sum of ints
 */

int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i, sum;

va_start(args, n);

if (n == 0)
return (0);
sum = 0;
for (i = 0; i < n; i++)
{
sum += va_arg(args, const unsigned int);
}

va_end(args);

return (sum);
}
