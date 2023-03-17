#include <stdio.h>
/**
 * main - Entry point
 *
 *Program prints the numbers from 0 to 9 separated by a comma
 * and a space using only the putchar function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num = 0;
while (num < 10)
{
putchar(num + '0');
if (num != 9)
{
putchar(',');
putchar(' ');
}
num++;
}
putchar('\n');
return (0);
}
