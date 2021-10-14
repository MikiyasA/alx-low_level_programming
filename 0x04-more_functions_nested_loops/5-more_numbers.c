#include "main.h"

/**
 * more_numbers - print from 1-14 10 times
 *
 * Return: no return
 */

void more_numbers(void)
{
int h = 0;
int i;

while (h < 10)
{
for (i = 0; i < 15; i++)
{
if (i >= 10)
_putchar((i / 10) + 48);
_putchar((i % 10) + 48);
}
_putchar('\n');
h++;
}
}
