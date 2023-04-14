#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _isdigit - checks if a string is a digit
 * @str: pointer to the string to check
 *
 * Return: 1 if the string is a digit, 0 otherwise
 */
int _isdigit(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (!isdigit(str[i]))
            return (0);
    }

    return (1);
}

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
    int i, j, k, carry, len1, len2, *result;
    char *num1, *num2;

    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }

    num1 = argv[1];
    num2 = argv[2];

    if (!_isdigit(num1) || !_isdigit(num2))
    {
        printf("Error\n");
        return (98);
    }

    len1 = strlen(num1);
    len2 = strlen(num2);

    result = calloc(len1 + len2, sizeof(int));
    if (result == NULL)
        return (1);

    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        for (j = len2 - 1; j >= 0; j--)
        {
            k = i + j + 1;
            result[k] += (num1[i] - '0') * (num2[j] - '0') + carry;
            carry = result[k] / 10;
            result[k] %= 10;
        }
        result[i] += carry;
    }

    for (i = 0; i < len1 + len2; i++)
    {
        if (result[i] != 0)
            break;
    }

    for (; i < len1 + len2; i++)
        printf("%d", result[i]);

    printf("\n");

    free(result);

    return (0);
}

