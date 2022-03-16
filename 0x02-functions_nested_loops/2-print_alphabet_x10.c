#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int a;
int i;
a = 1;
while (a <= 10)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
a++;
_putchar('\n');
}
}
