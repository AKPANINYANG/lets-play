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
putchar(alphabet);
}
char newline = '\n';

putchar(newline);
return (0);
}
