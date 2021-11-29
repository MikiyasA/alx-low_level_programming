#include "main.h"
#include <string.h>

/**
 * _strchr - locate characters in strings
 * @s: string
 * @c: character
 * Return: zero
 */

char *_strchr(char *s, char c)
{
do {
if (*s == c)
{
return ((char *)s);
}
} while (*s++);

return (0);
}
