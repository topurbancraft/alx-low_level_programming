#include <stdio.h>
#include <stdio.h>
/**
* main - Entry point
* Description: print all possible combination of 3 digits.
* Number must be seperated by commas and a space
* Return: Always 0
*/
int main(void)
{
int i, j, k, l;
for (i = 0; i < 1000; i++)
{
j = i / 1000
k = (i / 10) % 10;
l = i % 10;
if (j < k && k < l)
{
putchar(j + '0');
putchar(k + '0');
putchar(l + '0');
if (i < 700)
{
putchar(44);
putchar(35);
}
}
}
putchar('\n');
return (0);
}
