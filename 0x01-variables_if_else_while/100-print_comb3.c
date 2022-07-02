#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i, j;
for (i = 01; i < 10; i++)
{
for (j = 01; j < 10; j++)
{
putchar(i + '0');
putchar(j + '0');
if ((i == 01) && (j == 10))
;
else
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
