#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase,
 *        followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char hex[] = "0123456789abcdef";
int i;
for (i = 0; i < 16; i++)
{
putchar(hex[i / 8]);
putchar(hex[(i / 4) % 2 + ((i / 8) * 2)]);
putchar(hex[i % 4 + ((i / 8) * 4)]);
}
putchar('\n');
return (0);
}
