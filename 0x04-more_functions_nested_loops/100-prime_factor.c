#include <math.h>
#include <stdio.h>
#include "main.h"
/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
long int num = 612852475143;
long int largest_factor = 0;
long int i;
while (num % 2 == 0)
{
largest_factor = 2;
num /= 2;
}
for (i = 3; i <= sqrt(num); i += 2)
{
while (num % i == 0)
{
largest_factor = i;
num /= i;
}
}
if (num > 2)
{
largest_factor = num;
}
while (largest_factor > 0)
{
putchar((largest_factor % 10) + '0');
largest_factor /= 10;
}
putchar('\n');
return (0);

}

