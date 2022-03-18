#include "main.h"

/**
 *_isupper - entry code
 *@c: contains value to be compared
 *Return: always 0
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
