/*
 * File: 104-fibonacci.c
 * Auth: Brennan D Baraban
 *       Daniel Mutuku
 */

#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0.
 */
int main(void)
{
int count;
unsigned long int fib1 = 1, fib2 = 2, fib_sum;
printf("%lu, %lu", fib1, fib2);
for (count = 0; count < 96; count++)
{
fib_sum = fib1 + fib2;
printf(", %lu", fib_sum);
fib1 = fib2;
fib2 = fib_sum;
}
printf("\n");
return (0);
}
