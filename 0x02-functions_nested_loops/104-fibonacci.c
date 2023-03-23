#include <stdio.h
/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a = 1, b = 2, c;
printf("%d, %d, ", a, b);
for (int i = 3; i <= 98; i++)
{
c = a + b;
printf("%d", c);
if (i != 98)
{
printf(", ");
}
a = b;
b = c;
}
printf("\n");
return (0);
}
