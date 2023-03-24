#include "main.h"

/**
 * largest_prime_factor - finds the largest prime factor of a number
 * @n: the number to factorize
 *
 * Return: the largest prime factor of n
 */
long largest_prime_factor(long n)
{
long factor;

for (factor = 2; factor < n; factor++)
{
while (n % factor == 0)
{
n /= factor;
}
}
return n;

}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
long n = 612852475143;
long largest_factor = largest_prime_factor(n);
_putchar(largest_factor + '0');
_putchar('\n');
return 0;
}

