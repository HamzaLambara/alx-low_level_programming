#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms in the Fibonacci sequence
 * whose values do not exceed 4,000,000
 * Return: Always 0 (Success)
 */
int main(void)
{
int a = 1, b = 2, sum = 0, fib;
while (b <= 4000000)
{
if (b % 2 == 0)
sum += b;
fib = a + b;
a = b;
b = fib;
}
printf("%d\n", sum);
return (0);
}
