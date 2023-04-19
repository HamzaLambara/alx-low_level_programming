#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of this function
 * @num_bytes: The number of bytes to print
 */
void print_opcodes(int num_bytes);

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 on success, 1 if the number of arguments is invalid,
 *         or 2 if the number of bytes is negative.
 */
int main(int argc, char *argv[])
{
    int num_bytes;

    if (argc != 2)
    {
        fprintf(stderr, "Error\n");
        return (1);
    }

    num_bytes = atoi(argv[1]);

    if (num_bytes <= 0)
    {
        fprintf(stderr, "Error\n");
        return (2);
    }

    print_opcodes(num_bytes);

    return (0);
}

/**
 * print_opcodes - Prints the opcodes of this function
 * @num_bytes: The number of bytes to print
 */
void print_opcodes(int num_bytes)
{
    unsigned char *ptr = (unsigned char *)&print_opcodes;
    int i;

    for (i = 0; i < num_bytes; i++)
    {
        printf("%02x ", *(ptr + i));
    }

    printf("\n");
}

