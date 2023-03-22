#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the sum of the even-valued terms in the Fibonacci
 * sequence whose values do not exceed 4,000,000.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
long int i, j, k, sum;
i = 0;
j = 1;
sum = 0;
while (k <= 4000000)
{
k = i + j;
if (k % 2 == 0)
{
sum += k;
}
i = j;
j = k;
}
printf("%ld\n", sum);
return (0);
}
