#include "main.h"

/**
 * _print_rev_recursion - print string in reverse
 * @s: str to be printed
 * Return: NA
 */

void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
