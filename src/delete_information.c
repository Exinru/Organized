/*
** EPITECH PROJECT, 2023
** EPITECH PROJECT ORGANIZED
** File description:
** delete information in the linked list
*/

#include "../include/my.h"
#include "../libshell/shell.h"

int get_number(char *args)
{
    int num = 0;

    for (int i = 0; args[i] != '\0'; i++) {
        if (args[i] >= '0' && args[i] <= '9')
            num = (num * 10) + (args[i] - 48);
        if (args[i] < '0' && args[i] > '9')
            return (-1);
    }
    return (num);
}

int delete_information(void *data, int id)
{
    list_t *list = data;
    element_t *prev = NULL;
    element_t *element = list->first;

    while (element != NULL && element->data.id != id) {
        prev = element;
        element = element->next;
    }
    if (element == NULL)
        return (1);
    print_format(element);
    my_putstr(" deleted.\n");
    if (prev == NULL)
        list->first = element->next;
    else
        prev->next = element->next;
    free(element);
    return (0);
}

int del(void *data, char **args)
{
    int id = 0;

    for (int i = 0; args[i] != NULL; i++) {
        if (get_number(args[i]) == -1)
            return (-1);
        id = get_number(args[i]);
        if (delete_information(data, id) == 1) {
            return (1);
        }
    }
    return (0);
}
