
#include "main.h"

/**
* _isupper - Entry point
* @c: character to be checked
* Return: 1 if uppercase
*/

int _isupper(int c)
{
char uppercase = 'A';
int isupper = 0;

for (; uppercase <= 'Z'; uppercase++)
{
if (c == uppercase)
{
isupper = 1;
break;
}
}
return (isupper);
}
