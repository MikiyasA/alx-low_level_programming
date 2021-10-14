#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - this function will determine if the randum No. is +ve, zero or -ve
 * Description: using the main function
 * Return: zero value
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
