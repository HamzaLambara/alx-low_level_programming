#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers,
 *        starting with 1 and 2, followed by a new line
 *
 * Return: 0 on success
 */
int main(void)
{
unsigned long int i, a = 1, b = 2, c;
printf("%lu, %lu", a, b);
for (i = 2; i < 98; i++)
{
c = a + b;
printf(", %lu", c);
a = b;
b = c;
}
putchar('\n');
return (0);
}
