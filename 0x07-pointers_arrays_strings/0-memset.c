#include "main.h"
/**
 *_memset - sets a block of memmory to a value
 *@s: pointer to be filled
 *@b: vale to be set
 *@n: bytes of memory
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
*(s + i) = b;
return (s);
}
