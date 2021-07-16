/*
** Personal Project, 2021
** made during my formation in EPITECH
** File description:
** .h
*/

typedef struct str_linked_s
{
    char a;
    struct str_linked_s *next;
}str_linked_t;

int strlinkedlen(str_linked_t *str);