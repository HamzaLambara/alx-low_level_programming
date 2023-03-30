#include "main.h"

/**
 * infinite_add - adds two numbers
 *
 * @n1: first number
 * @n2: second number
 * @r: buffer to store result
 * @size_r: buffer size
 *
 * Return: pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, carry = 0, sum = 0, i = 0, j = 0, k = 0;

/* find lengths of n1 and n2 */
while (n1[len1])
len1++;
while (n2[len2])
len2++;

/* check if buffer size is enough */
if (len1 >= size_r || len2 >= size_r || size_r <= 0)
return (0);

/* add digits from right to left */
for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--, k++)
{
sum = carry;
if (i >= 0)
sum += n1[i] - '0';
if (j >= 0)
sum += n2[j] - '0';
if (k >= size_r)
return (0);
r[k] = (sum % 10) + '0';
carry = sum / 10;
}

/* reverse the result */
for (i = 0, j = k - 1; i < j; i++, j--)
{
char tmp = r[i];
r[i] = r[j];
r[j] = tmp;
}

return (r);
}
