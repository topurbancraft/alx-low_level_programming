#include "main.h"
/**
 * _memcpy - copies a memmory area
 *@dest: pointer to the copied data
 *@src: pointer to data to be copied
 *@n: number of date to be copied
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
