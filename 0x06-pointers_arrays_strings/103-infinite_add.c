#include "holberton.h"

/**
 * infinite_add - Adds two numbers
 * @n1: First number to add
 * @n2: Second number to add
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result or 0 if the result can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, carry, sum;

	for (i = 0; n1[i] != '\0'; i++)
		;
	for (j = 0; n2[j] != '\0'; j++)
		;
	if (i + 2 > size_r || j + 2 > size_r)
		return (0);
	r[size_r - 1] = '\0';
	carry = 0;
	for (i--, j--, k = size_r - 2; k >= 0 && (i >= 0 || j >= 0); i--, j--, k--)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		carry = sum / 10;
		r[k] = (sum % 10) + '0';
	}
	if (carry)
	{
		if (k < 0)
			return (0);
		r[k--] = carry + '0';
	}
	if (k < 0)
		return (0);
	return (r + k + 1);
}

