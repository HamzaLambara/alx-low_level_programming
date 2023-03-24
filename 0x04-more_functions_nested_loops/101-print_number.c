#include <stdio.h>
#include <math.h>

/**
 * main - Finds and prints the largest prime factor of 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
long int n = 612852475143;
long int largest = 1;
long int i;

while (n % 2 == 0)
{
largest = 2;
n /= 2;
}

for (i = 3; i <= sqrt(n); i += 2)
{
while (n % i == 0)
{
largest = i;
n /= i;
}
}

if (n > 2)
{
largest = n;
}

/* Print the largest prime factor using putchar() */
if (largest < 0)
{
putchar('-');
largest = -largest;
}

if (largest / 10)
{
main(largest / 10);
}

putchar(largest % 10 + '0');

return (0);

}

