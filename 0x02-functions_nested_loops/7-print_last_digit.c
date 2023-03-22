#include "main.h"
int print_last_digit(int num)
{
int last_digit;
if (num < 0)
{
if (num == INT_MIN)  // Handle special case for INT_MIN
{
num = -(num + 1);
last_digit = 1;
}
else
{
num = -num;
last_digit = num % 10;
}
}
else
{
last_digit = num % 10;
}
putchar('0' + last_digit);
return last_digit;
}
