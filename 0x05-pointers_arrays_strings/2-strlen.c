#include "main.h"
/**
 *_strlen - calculates length of a string
 *@s: value to be calculated
 *
 *Return: always 0
 */
int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
i++;
return (i);
}
