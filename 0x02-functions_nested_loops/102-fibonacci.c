#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, n = 50;
unsigned long prev = 1, curr = 2, next;
printf("%lu, %lu", prev, curr);
for (i = 3; i <= n; i++)
{
next = prev + curr;
printf(", %lu", next);
prev = curr;
curr = next;
}
printf("\n");
return (0);
}
