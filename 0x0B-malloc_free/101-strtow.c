#include <stdlib.h>
#include "holberton.h"

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count the words of.
 *
 * Return: The number of words in str.
 */
static int count_words(char *str)
{
int i, count = 0;

for (i = 0; str[i] != '\0'; ++i)
{
if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
{
++count;
}
}
return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: If str == NULL, str == "", or memory allocation fails - NULL.
 *         Otherwise - a pointer to an array of strings (words).
 *         Each element of this array contains a single word, null-terminated.
 *         The last element of the returned array is NULL.
 */
char **strtow(char *str)
{
char **words;
int i, j, k, len, count;

if (str == NULL || *str == '\0')
return (NULL);

count = count_words(str);
words = malloc(sizeof(char *) * (count + 1));
if (words == NULL)
return (NULL);

for (i = 0, j = 0; j < count; ++j)
{
while (str[i] == ' ')
++i;

len = 0;
while (str[i + len] != ' ' && str[i + len] != '\0')
++len;

words[j] = malloc(sizeof(char) * (len + 1));
if (words[j] == NULL)
{
for (k = 0; k < j; ++k)
free(words[k]);
free(words);
return (NULL);
}

for (k = 0; k < len; ++k)
words[j][k] = str[i + k];
words[j][k] = '\0';
i += len;
}

words[j] = NULL;
return (words);
}

