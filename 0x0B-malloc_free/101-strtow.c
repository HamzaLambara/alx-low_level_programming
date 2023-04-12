#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count the words in.
 *
 * Return: The number of words in str.
 */
int count_words(char *str)
{
    int count = 0, i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
            count++;
    }

    return (count);
}

/**
 * free_words - Frees memory allocated for an array of words.
 * @words: The array of words to free.
 */
void free_words(char **words)
{
    int i;

    for (i = 0; words[i] != NULL; i++)
        free(words[i]);

    free(words);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words) or NULL if
 *         str == NULL, str == "" or if memory allocation fails.
 */
char **strtow(char *str)
{
    char **words;
    int i, j, k, count = 0, len = 0;

    if (str == NULL || *str == '\0')
        return (NULL);

    count = count_words(str);

    words = malloc((count + 1) * sizeof(char *));
    if (words == NULL)
        return (NULL);

    for (i = 0, k = 0; i < count; i++)
    {
        while (str[k] == ' ')
            k++;

        for (len = 0, j = k; str[j] != ' ' && str[j] != '\0'; j++)
            len++;

        words[i] = malloc((len + 1) * sizeof(char));
        if (words[i] == NULL)
        {
            free_words(words);
            return (NULL);
        }

        for (j = 0; j < len; j++)
            words[i][j] = str[k++];

        words[i][j] = '\0';
    }

    words[i] = NULL;

    return (words);
}

