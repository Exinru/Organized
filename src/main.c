/*
** EPITECH PROJECT, 2023
** EPITECH PROJECT ORGANIZED
** File description:
** main function for the project
*/

#include "../include/my.h"
#include "../libshell/shell.h"

void print_format(element_t *copy)
{
    my_putstr(copy->data.type);
    my_putstr(" n°");
    my_put_nbr(copy->data.id);
    my_putstr(" - ");
    my_putchar('"');
    my_putstr(copy->data.name);
    my_putchar('"');
}

int disp(void *data, char **args)
{
    list_t *list = (list_t *)data;
    element_t *copy = list->first;

    (void)args;
    while (copy != NULL) {
        print_format(copy);
        my_putchar('\n');
        copy = copy->next;
    }
    return (0);
}

int main(void)
{
    list_t data = {NULL};

    if (workshop_shell(&data) == 1)
        return (84);
    return (0);
}
