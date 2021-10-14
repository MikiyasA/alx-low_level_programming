#include "main.h"
#include <string.h>

/**
 * _strpbrk - search syring
 * @s: to be search str
 * @accept: whole str
 * Return: s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
s += strcspn(s, accept);
return (*s ? (char *)s : NULL);
}
