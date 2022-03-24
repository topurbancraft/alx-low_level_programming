#include "main.h"
/**
 * _strncat - concatenate two strings
 *@dest: will contain the destination string
 *@src: will contain the source string
 *@n: signifies number of characters allowed
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
for (i = 0; dest[i] != '\0'; i++)
;
for (j = 0; src[j] != '\0' && n > 0; j++, n--, i++)
{
dest[i] = src[j];
}
dest[i] = '\0';
return (dest);
}
