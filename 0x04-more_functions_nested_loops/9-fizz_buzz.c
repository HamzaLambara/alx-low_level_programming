#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, n;
char num[3];
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
_putchar('F');
_putchar('i');
_putchar('z');
_putchar('z');
_putchar('B');
_putchar('u');
_putchar('z');
_putchar('z');
}
else if (i % 3 == 0)
{
_putchar('F');
_putchar('i');
_putchar('z');
_putchar('z');
}
else if (i % 5 == 0)
{
_putchar('B');
_putchar('u');
_putchar('z');
_putchar('z');
}
else
{
n = i;
num[2] = (n % 10) + '0';
n /= 10;
num[1] = (n % 10) + '0';
num[0] = (n / 10) + '0';
if (i > 9)
_putchar(num[0]);
_putchar(num[1]);
_putchar(num[2]);
}
if (i != 100)
{
_putchar(' ');
}
}
_putchar('\n');
return (0);

}

