/*
** Personal Project, 2021
** made during my formation in EPITECH
** File description:
** .h
*/

#include "../include/str_linked.h"
#include <stddef.h>

int my_revlist(str_linked_t **begin)
{
    str_linked_t *prec = NULL;
    str_linked_t *curr = *begin;
    str_linked_t *next = NULL;

    while (curr != NULL) {
        next = curr->next;
        curr->next = prec;
        prec = curr;
        curr = next;
    }
    *begin = prec;
    return (0);
}