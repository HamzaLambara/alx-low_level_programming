#include "holberton.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to be checked.
 *
 * Return: The number of words in @str.
 */
int count_words(char *str)
{
        int i, count = 0, flag = 0;

        for (i = 0; str[i]; i++)
        {
                if (str[i] != ' ')
                {
                        if (flag == 0)
                                count++;
                        flag = 1;
                }
                else
                        flag = 0;
        }

        return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: If str = NULL, str = "", or the function fails - NULL.
 * Otherwise - a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
        char **matrix, *tmp;
        int i, j, k = 0, len = 0, words;

        if (str == NULL || count_words(str) == 0)
                return (NULL);

        words = count_words(str);
        matrix = malloc(sizeof(char *) * (words + 1));

        if (matrix == NULL)
                return (NULL);

        for (i = 0; str[i]; i++)
        {
                if (str[i] != ' ')
                {
                        len = 0;

                        for (j = i; str[j] && str[j] != ' '; j++)
                                len++;

                        tmp = malloc(sizeof(char) * (len + 1));

                        if (tmp == NULL)
                        {
                                for (k = 0; k < i; k++)
                                        free(matrix[k]);

                                free(matrix);
                                return (NULL);
                        }

                        for (j = i; str[j] && str[j] != ' '; j++)
                                tmp[j - i] = str[j];

                        tmp[j - i] = '\0';
                        matrix[k] = tmp;
                        k++;
                        i = j - 1;
                }
        }

        matrix[k] = NULL;
        return (matrix);
}

