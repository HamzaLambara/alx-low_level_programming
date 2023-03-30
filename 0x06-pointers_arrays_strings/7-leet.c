#include "holberton.h"

/**
 * leet - encode a string into 1337
 * @s: string
 * Return: encoded string `s`
 */

char *leet(char *s)
{
int i, j;
char letters[] = "aAeEoOtTlL";
char numbers[] = "4433007711";

for (i = 0; s[i] != '\0'; i++)
{
j = 0;
while (letters[j] != '\0')
{
if (s[i] == letters[j])
{
s[i] = numbers[j];
break;
}
j++;
}
}

return s;

}

