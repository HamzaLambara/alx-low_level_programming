#include <unistd.h>

/**
 * main - entry point, prints _putchar followed by a new line
 *
 * Return: 0 on success
 */
int main(void)
{
char c;
c = '_'; /* store _ in a variable */
write(1, &c, 1); /* write the character to stdout */
c = 'p'; /* store p in a variable */
write(1, &c, 1); /* write the character to stdout */
c = 'u'; /* store u in a variable */
write(1, &c, 1); /* write the character to stdout */
c = 't'; /* store t in a variable */
write(1, &c, 1); /* write the character to stdout */
c = 'c'; /* store c in a variable */
write(1, &c, 1); /* write the character to stdout */
c = 'h'; /* store h in a variable */
write(1, &c, 1); /* write the character to stdout */
c = 'a'; /* store a in a variable */
write(1, &c, 1); /* write the character to stdout */
c = 'r'; /* store r in a variable */
write(1, &c, 1); /* write the character to stdout */
c = '\n'; /* store a new line character in a variable */
write(1, &c, 1); /* write the character to stdout */
return (0); /* return 0 on success */
}

