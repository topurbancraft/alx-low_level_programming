#include <stdio.h>
/**
 *main - printd alphabets lower case 
 *followed by new line except q and c 
 *Return: Always 0
 */
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
ch++;
}
putchar('\n');
return (0);
}
