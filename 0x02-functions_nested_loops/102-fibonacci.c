/*
 * File: 102-fibonacci.c
 * Auth: <Your Name>
 * Date: <Date>
 * Desc: Prints the first 50 Fibonacci numbers, starting with 1 and 2.
 */

#include <stdio.h>

/**
 * main - Entry point, prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, fib, fib_prev = 1, fib_curr = 2;
printf("%d, %d, ", fib_prev, fib_curr);
for (i = 3; i <= 50; i++)
{
fib = fib_prev + fib_curr;
printf("%d", fib);
if (i < 50)
{
printf(", ");
}
fib_prev = fib_curr;
fib_curr = fib;
}
printf("\n");
return 0;
}
