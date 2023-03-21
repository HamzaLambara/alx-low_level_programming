#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase followed by a new line
 */
void print_alphabet(void)
{
char letter;
letter = 'a';
while (letter <= 'z')
{
if (letter == 'e' || letter == 'q')
{
letter++;
continue;
}
_putchar(letter);
letter++;
}
_putchar('\n');
}
