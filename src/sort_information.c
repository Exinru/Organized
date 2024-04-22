/*
** EPITECH PROJECT, 2023
** EPITECH PROJECT ORGANIZED
** File description:
** sorting acording to name or type or id
*/

#include "../include/my.h"
#include "../libshell/shell.h"

int check_tag(char *str)
{
    if (my_strcmp(str, "ID") == 0)
        return (0);
    if (my_strcmp(str, "TYPE") == 0)
        return (1);
    if (my_strcmp(str, "NAME") == 0)
        return (2);
    else
        return (-1);
}

int check_rev(char *str)
{
    if (my_strcmp(str, "ID") == 0)
        return (3);
    if (my_strcmp(str, "TYPE") == 0)
        return (4);
    if (my_strcmp(str, "NAME") == 0)
        return (5);
    else
        return (-1);
}

int sort_test(void *data, char *arg, int num)
{
    list_t *list = data;
    element_t *element = list->first;
    element_t *next = NULL;
    int (*swap_functions[])(element_t *, element_t *) = {swap_id,
        swap_type, swap_name, swap_id_rev, swap_type_rev,
        swap_name_rev};
    int swap_num = -1;

    (void)arg;
    while (swap_num != 0) {
        swap_num = 0;
        next = element;
        while (next != NULL) {
            swap_num = swap_num + swap_functions[num](element, next);
            next = next->next;
        }
        element = element->next;
    }
    return (0);
}

int sort(void *data, char **args)
{
    for (int i = 0; args[i] != NULL; i++) {
        if (args[i + 1] == NULL && check_tag(args[i]) > -1) {
            sort_test(data, args[i], check_tag(args[i]));
        }
        if (args[i + 1] != NULL && check_rev(args[i]) > 0
            && my_strcmp(args[i + 1], "-r") == 0) {
            sort_test(data, args[i], check_rev(args[i]));
            i++;
        }
    }
    return (0);
}
