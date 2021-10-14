#include "main.h"

/**
 * swap_int - to swap value of a & b
 * @a: value
 * @b: value
 * Return: NA
 */

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
