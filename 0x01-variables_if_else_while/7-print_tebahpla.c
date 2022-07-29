#include <stdio.h>

/**
*main - Entry point
*Return: always zero
**/

int main(void)
{
char alphabet;
for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
{
putchar(alphabet);
}
char newline = '\n';

putchar(newline);
return (0);
}
