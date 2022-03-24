#include "main.h"
/**
 * reverse_array - reverses the array
 *@a: an array of integers
 *@n: number of elements to swap
 *Return: nothing
 */
void reverse_array(int *a, int n)
{
int i;
	int h;

	for (i = 0; i < (n / 2); i++)
	{
		h = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = h;
	}
}
