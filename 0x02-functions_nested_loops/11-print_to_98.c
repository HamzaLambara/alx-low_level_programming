#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 *               followed by a new line.
 * @n: the starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
while (n != 98)
{
putchar(n / 10 + '0');
putchar(n % 10 + '0');
putchar(',');
putchar(' ');
if (n < 98)
n++;
else
n--;
}
putchar('9');
putchar('8');
putchar('\n');
}
