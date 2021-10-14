#include "main.h"
#include <string.h>

/**
 * _strspn - length of prifix substring
 * @s: segment
 * @accept: whole string
 * Return: p-1-s
 */

unsigned int _strspn(char *s, char *accept)
{
char *p = s, *spanp;
char c, sc;

cont:
c = *p++;
for (spanp = accept; (sc = *spanp++) != 0;)
if (sc == c)
goto cont;
return (p - 1 - s);
}
