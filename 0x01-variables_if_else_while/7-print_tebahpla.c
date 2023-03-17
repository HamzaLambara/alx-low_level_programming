#include <stdio.h>

/**
 * main - Entry point
 *
 *Program prints the lowercase alphabet in reverse followed by a new linE
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 122; i >= 97; i--)
{
putchar(i);
}
putchar('\n');
return (0);
}
