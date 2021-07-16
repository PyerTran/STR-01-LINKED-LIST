/*
** Personal Project, 2021
** made during my formation in EPITECH
** File description:
** strlen for str linked
*/

#include <stddef.h>
#include "../include/str_linked.h"

int strlinkedlen(str_linked_t *str)
{
    int res = 0;

    for (; str != NULL; str = str->next) {
        res += 1;
    }
    return res;
}