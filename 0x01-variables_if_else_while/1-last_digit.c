#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - the find the lasd digit and check if it is >5, <6 not 0 $ is 0
 * Description: using the main function
 * Return: o value
 */

int main(void)
{
int n, lD;

srand(time(0));
n = rand() - RAND_MAX / 2;

lD = n % 10;

if (lD > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lD);
}
else if (lD == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lD);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lD);
}
return (0);
}
