#include "holberton.h"

/**
 * wildcmp - compares two strings and returns 1 if they can be considered
 * identical, otherwise return 0. The second string can contain the special
 * character * that can replace any string (including an empty string).
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 1 if s1 and s2 can be considered identical, otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{
/* Skip consecutive asterisks in s2 */
while (*(s2 + 1) == '*')
s2++;

if (*s1 == '\0' && *(s2 + 1) == '\0')
return (1);

if (*s1 == '\0')
return (wildcmp(s1, s2 + 1));

return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
}

if (*s1 == '\0' || *s2 == '\0')
return (*s1 == *s2);

if (*s1 != *s2)
return (0);

return (wildcmp(s1 + 1, s2 + 1));
}

