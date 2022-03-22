#include "main.h"
/**
 *swap_int- swaps values of a and b
 *@a: contains new value of a
 *@b: contains new value of b
 *Return: always 0
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
