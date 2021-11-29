#include "main.h"
#include <string.h>

/**
 * _strncpy - copy string
 * @dest: destination
 * @src: source
 * @n: no. of bytes
 * Return: copy function
 */

char *_strncpy(char *dest, char *src, int n)
{
int size = strnlen(src, n);

if (size != n)
{
memset(dest + size, '\0', n - size);
}
return (memcpy(dest, src, size));
}
