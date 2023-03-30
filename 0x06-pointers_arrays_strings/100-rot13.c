#include "holberton.h"
#include "main.h"
#include <stdio.h>

char *rot13(char *s)
{
char *p = s;
char letter;
int i;

while (*p != '\0')
{
if ((*p >= 'a' && *p <= 'm') || (*p >= 'A' && *p <= 'M'))
{
letter = *p + 13;
}
else if ((*p >= 'n' && *p <= 'z') || (*p >= 'N' && *p <= 'Z'))
{
letter = *p - 13;
}
else
{
letter = *p;
}
*p = letter;
p++;
}
return s;
}

