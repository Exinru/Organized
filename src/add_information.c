/*
** EPITECH PROJECT, 2023
** EPITECH PROJECT ORGANISED
** File description:
** add and store new information
*/
#include "../include/my.h"
#include "../libshell/shell.h"

int check_category(char *str)
{
    if (my_strcmp(str, "ACTUATOR") == 0)
        return (0);
    if (my_strcmp(str, "DEVICE") == 0)
        return (0);
    if (my_strcmp(str, "PROCESSOR") == 0)
        return (0);
    if (my_strcmp(str, "SENSOR") == 0)
        return (0);
    if (my_strcmp(str, "WIRE") == 0)
        return (0);
    else
        return (1);
}

element_t *add_information(char *type, char *name, int id)
{
    element_t *element = malloc(sizeof(element_t));

    element->data.name = my_strdup(name);
    element->data.id = id;
    element->data.type = my_strdup(type);
    element->next = NULL;
    print_format(element);
    my_putstr(" added.\n");
    return (element);
}

int add(void *data, char **args)
{
    static int id = 0;
    list_t *list = data;
    element_t *additional;

    for (int cont = 0; args[cont] != NULL; cont++) {
        if (check_category(args[cont]) == 0 && args[cont + 1] != NULL) {
            additional = list->first;
            list->first = add_information(args[cont], args[cont + 1], id);
            list->first->next = additional;
            id++;
        }
        if (check_category(args[cont]) == 1
            && (cont % 2) == 0) {
            my_putstr("hello");
            return (1);
        }
        if (check_category(args[cont]) == 0 && args[cont + 1] == NULL)
            return (1);
    }
    return (0);
}
