#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
int fd;
int ld;
int c = 0;
while (c <= 99)
{
fd = (c / 10 + '0');
ld = (c % 10 + '0');
if (fd < ld)
{
putchar(fd);
putchar(ld);
 if (c < 89)
{
putchar(',');
putchar(',');
}
}
c++;
}
putchar('\n');
return (0);
}
