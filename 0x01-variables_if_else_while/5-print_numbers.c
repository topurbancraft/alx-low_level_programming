#include <stdio.h>
#include <stdlib.h>
/**
 *main - print number 1-10
 *followed by a new line 
 *Return: Always 0
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
printf("%d", i);
}
putchar('\n');
return (0);
}
