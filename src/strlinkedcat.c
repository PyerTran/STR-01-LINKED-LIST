/*
** Personal Project, 2021
** made during my formation in EPITECH
** File description:
** .h
*/

#include <stdlib.h>
#include "../include/str_linked.h"
#include "../include/utils.h"

str_linked_t *strlinkedcat(str_linked_t *str1, str_linked_t *str2)
{
    str_linked_t *tmp = NULL;

    my_revlist(&str2);
    while (tmp != NULL) {
        tmp = tmp->next;
    }
    tmp->next = str2;
    return str1;
}