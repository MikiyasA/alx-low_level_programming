#include <stdio.h>

/**
 * main - print all combination of three didit
 * Description: using the main function
 * Return: 0 value
 */

int main(void)
{

int i, j;

for (i = 0; i < 9; i++)
{
for (j = 0; j < 10; j++)
{

if (i != j && i < j)
{

putchar ((i % 10) + '0');
putchar ((j % 10) + '0');

if (i == 8 && j == 9)
{
break;
}
putchar (',');
putchar (' ');


}

}
}
putchar ('\n');
return (0);
}
