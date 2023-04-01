#include "holberton.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer.
 *
 * @b: Buffer to print.
 * @size: Number of bytes to print.
 *
 * Return: Nothing.
 */
void print_buffer(char *b, int size)
{
int i, j, k;
if (size <= 0)
{
printf("\n");
return;
}
for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);
for (j = i; j < i + 10; j++)
{
if (j < size)
printf("%02x", *(b + j));
else
printf("  ");
if (j % 2 != 0)
printf(" ");
}
for (k = i; k < i + 10; k++)
{
if (k >= size)
break;
if (*(b + k) >= 32 && *(b + k) <= 126)
printf("%c", *(b + k));
else
printf(".");
}
printf("\n");
}
}

