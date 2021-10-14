#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
 * print_last_digit - Print the last digit
 * @n: input number as an integer
 * Return: l
 */

int print_last_digit(int n)
{
int l;

l = n % 10;
if (l < 0)
{
_putchar(-l + 48);
return (-l);
}
else
{
_putchar(l + 48);
return (l);
}
}
