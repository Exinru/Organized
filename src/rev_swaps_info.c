/*
** EPITECH PROJECT, 2023
** EPITECH PROJECT ORGANIZED
** File description:
** swap functions for the different tags, reverse
*/

#include "../include/my.h"
#include "../libshell/shell.h"

int swap_id_rev(element_t *element, element_t *next)
{
    elem_d temp;

    if (element->data.id < next->data.id) {
        temp = element->data;
        element->data = next->data;
        next->data = temp;
        return (1);
    }
    return (0);
}

int swap_name_rev(element_t *element, element_t *next)
{
    elem_d temp;
    char *element_name = element->data.name;
    char *next_name = next->data.name;

    for (int cont = 0; element_name[cont] != '\0' ||
    next_name[cont] != '\0'; cont++) {
        if (element_name[cont] < next_name[cont]) {
            temp = element->data;
            element->data = next->data;
            next->data = temp;
            return (1);
        }
        if (element_name[cont] == next_name[cont])
            continue;
        if (element_name[cont] > next_name[cont])
            break;
    }
    return (0);
}

int swap_type_rev(element_t *element, element_t *next)
{
    elem_d temp;
    char *element_type = element->data.type;
    char *next_type = next->data.type;

    for (int cont = 0; element_type[cont] != '\0' ||
    next_type[cont] != '\0'; cont++) {
        if (element_type[cont] < next_type[cont]) {
            temp = element->data;
            element->data = next->data;
            next->data = temp;
            return (1);
        }
        if (element_type[cont] == next_type[cont])
            continue;
        if (element_type[cont] > next_type[cont])
            break;
    }
    return (0);
}
