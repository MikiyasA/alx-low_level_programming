#include <stdio.h>

/**
 * main - print all combination of four digit
 * Description: using the main function
 * Return: 0 value
 */

int main(void)
{
int i, j, k, l, a, b;

i = j = k = l = 48;
while (l < 58)
{
k = 48;
while (k < 58)
{
j = 48;
while (j < 58)
{
i = 48;
while (i < 58)
{
a = (l * 10) + k;
b = (j * 10) + i;
if (a < b)
{
putchar(l);
putchar(k);
putchar(' ');
putchar(j);
putchar(i);
if (l == 57 && k == 56 && j == 57 && i == 57)
break;
putchar(',');
putchar(' ');
}
i++;
}
j++;
}
k++;
}
l++;
}
putchar('\n');
return (0);
}
