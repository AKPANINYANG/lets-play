#include <stdio.h>

/**
*main - Entry point
*Return: always zero
**/

int main(void)
{
int number;
for (number = '0'; number <= '9'; number++)
{
putchar(number);

if (number == '9')
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
