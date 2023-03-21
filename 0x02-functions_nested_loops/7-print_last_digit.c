/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to print the last digit of
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
int last_digit;
if (n < 0)
n = -n;
if (n == 0)
last_digit = 0;
else
last_digit = n % 10;
_putchar('0' + last_digit);
return (last_digit);
}
