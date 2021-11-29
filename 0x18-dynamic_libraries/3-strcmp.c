#include "main.h"
#include <string.h>

/**
 * _strcmp - compare two string
 * @s1: first string
 * @s2: second string
 * Return: comparision
 */

int _strcmp(char *s1, char *s2)
{
char *p1 = (char *) s1;
char *p2 = (char *) s2;
char c1, c2;

do {
c1 = (char) *p1++;
c2 = (char) *p2++;

if (c1 == '\0')
return (c1 - c2);
}

while (c1 == c2);

return (c1 - c2);
}
