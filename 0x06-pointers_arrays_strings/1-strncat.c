#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings with n bytes
 * @dest: destination
 * @src: source
 * @n: No. of bytes
 * Return: s
 */

char *_strncat(char *dest, char *src, int n)
{
char *s = dest;
int l;
dest += strlen(dest);

l = strnlen(src, n);

dest[l] = '\0';
memcpy(dest, src, l);

return (s);
}
