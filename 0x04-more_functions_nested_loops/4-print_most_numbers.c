#include "main.h"

/**
 * print_most_numbers - print from 0-9 exceot 2&4
 *
 * Return: no return
 */

void print_most_numbers(void)
{
int n = 48;

while (n < 58)
{
if (n != 50 && n != 52)
{
_putchar (n);
}
n++;
}
_putchar ('\n');
}
