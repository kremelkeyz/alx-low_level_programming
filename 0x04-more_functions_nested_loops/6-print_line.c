#include "main.h"

/**
 * print_line - Entry point
 * @n: integer
 * Return: always 0.
 */

void print_line(int n)
{
int count = 1;
for (count = 1; count <= n; count++)
{
_putchar('_');
}
_putchar('\n');
}
