#include "main.h"
#include <stdio.h>
#include<ctype.h>

/**
 * _isupper - Entry point
 * @c: character to be checked
 * Return: 1 if uppercase
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
