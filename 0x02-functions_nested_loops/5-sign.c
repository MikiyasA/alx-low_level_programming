#include "main.h"

/**
 * print_sign - print a sign depend on the No.
 * @n: The input number as an integer.
 *
 * Return: 1, 0 & -1
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
_putchar('\n');
}
