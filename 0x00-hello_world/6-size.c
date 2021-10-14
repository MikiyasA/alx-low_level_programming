#include <stdio.h>

/**
 * main - provide the size on two different bit size
 * Description: it will print char, int and other bytes
 * bit size is 32 and 64
 * Return: 0
 */
int main(void)
{
char  c;
int i;
long l;
long long ll;
float f;

printf("Size of a char: %ld byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %ld byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %ld byte(s)\n", (unsigned long)sizeof(l));
printf("Size of a long long int: %ld byte(s)\n", (unsigned long)sizeof(ll));
printf("Size of a float: %ld byte(s)\n", (unsigned long)sizeof(f));

return (0);
}
