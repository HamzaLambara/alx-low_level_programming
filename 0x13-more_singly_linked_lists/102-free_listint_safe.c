#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: Pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 * The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
    size_t count = 0;
    listint_t *current, *temp;

    if (h == NULL || *h == NULL)
        return (0);

    current = *h;
    while (current != NULL)
    {
        count++;
        if (current <= current->next)
        {
            free(current);
            *h = NULL;
            break;
        }
        temp = current;
        current = current->next;
        free(temp);
    }

    *h = NULL;
    return (count);
}

