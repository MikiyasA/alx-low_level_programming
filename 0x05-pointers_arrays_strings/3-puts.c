#include "main.h"
#include <string.h>
/**
 * _puts - print string
 * @str: strings
 * Return: NA
 */

void _puts(char *str)
{
int count = 0;

while (count >= 0)
{
if (str[count] == '\0')
{
_putchar('\n');
break;
}
_putchar(str[count]);
count++;
}
}
