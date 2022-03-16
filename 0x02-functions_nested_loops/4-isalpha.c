#include "main.h"
/**
 *_isalpha - Return 1 if c is an alphabet
 *@c: the int to print
 *Return: always zero
 */
int _isalpha(int c)
{
if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
{
return (1);
}
else
{
return (0);
}
}
