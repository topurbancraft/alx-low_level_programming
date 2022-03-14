#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints lower and uppercase alphabets
 *followed by a new line
 *Return:Always 0
 */
int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
for (i = 'A'; i <= 'Z'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
