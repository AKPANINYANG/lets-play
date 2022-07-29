#include <stdio.h>

/**
*main - Entry point
*Return: always zero
**/

int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet == 'q')
{
continue;
}
else if (alphabet == 'e')
{
continue;
}

putchar(alphabet);
}
char newline = '\n';

putchar(newline);
return (0);
}
