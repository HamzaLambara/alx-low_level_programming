#include "holberton.h"
/**
 * rot13 - Encode a string using ROT13 encryption
 * @str: The string to be encoded
 *
 * Return: A pointer to the encoded string
 */

char *rot13(char *str)
{
char *p = str;
char *alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
int i;

while (*p)
{
i = 0;
while (alphabet[i])
{
if (*p == alphabet[i])
{
*p = rot13[i];
break;
}
i++;
}
p++;
}
return str;

}

