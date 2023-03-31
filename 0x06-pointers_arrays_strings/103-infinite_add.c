#include "holberton.h"
/**
 * infinite_add - Adds two numbers.
 * @n1: First number to be added.
 * @n2: Second number to be added.
 * @r: Buffer to store result.
 * @size_r: Size of the buffer.
 *
 * Return: Pointer to the result, or 0 if buffer size is too small.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum = 0;
	int i = 0, j = 0, k = 0;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	if (len1 + 2 > size_r || len2 + 2 > size_r)
		return (0);

	for (i = len1 - 1, j = len2 - 1, k = 0; i >= 0 || j >= 0 || carry; i--, j--, k++)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';

		carry = sum / 10;
		r[k] = (sum % 10) + '0';
	}

	if (k > size_r)
		return (0);

	r[k--] = '\0';

	for (i = 0; i < k; i++, k--)
	{
		char c = r[i];
		r[i] = r[k];
		r[k] = c;
	}

	return (r);
}

