#include "main.h"
#include <stdio.h>

/**
*print_alphabet_x10 - prints alphabet 10x
*
*Return (0) always.
*/

void print_alphabet_x10(void)
{
int n = 10;
int c;

for (n = 0; n < 10; n++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
