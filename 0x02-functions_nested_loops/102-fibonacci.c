#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
int count, n1 = 1, n2 = 2, next;
printf("%d, %d", n1, n2);
for (count = 3; count <= 50; count++)
{
next = n1 + n2;
printf(", %d", next);
n1 = n2;
n2 = next;
}
printf("\n");
return (0);
}
