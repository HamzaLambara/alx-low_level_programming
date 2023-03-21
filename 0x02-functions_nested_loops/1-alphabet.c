/* File: 1-alphabet.c */

#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
    int i;

    for (i = 'a'; i <= 'z'; i++)
    {
        _putchar(i);
    }
    _putchar('\n');
}

/**
 * main - Entry point
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
    print_alphabet();

    return (0);
}

/* File: main.h */

#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

#endif /* MAIN_H */

