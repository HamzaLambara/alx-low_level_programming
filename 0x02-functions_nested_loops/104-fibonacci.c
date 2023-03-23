#include <stdio.h>

/**
 * print_fibonacci - Prints the first n Fibonacci numbers, starting with 1 and 2
 * @n: The number of Fibonacci numbers to print
 */
void print_fibonacci(int n)
{
int a = 1, b = 2, c;
printf("%d, %d", a, b);
for (int i = 3; i <= n; i++) {
c = a + b;
printf(", %d", c);
a = b;
b = c;
}
printf("\n");
}
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
print_fibonacci(98);
return (0);
}
