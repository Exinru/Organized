/*
** EPITECH PROJECT, 2023
** EPITECH PROJECT SETTING UP
** File description:
** my.h
*/

#ifndef MY_H_
    #define MY_H_
    #include <fcntl.h>
    #include <sys/stat.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>

typedef struct element_data {
    char *name;
    int id;
    char *type;
} elem_d;

typedef struct element {
    elem_d data;
    struct element *next;
} element_t;

typedef struct list {
    element_t *first;
} list_t;

int swap_type_rev(element_t *element, element_t *next);
int swap_name_rev(element_t *element, element_t *next);
int swap_id_rev(element_t *element, element_t *next);
int swap_id(element_t *element, element_t *next);
int swap_id_rev(element_t *element, element_t *next);
int swap_name(element_t *element, element_t *next);
int swap_type(element_t *element, element_t *next);
int del(void *data, char **args);
int delete_information(void *data, int id);
int get_number(char *args);
void print_format(element_t *copy);
int my_strcmp(char const *s1, char const *s2);
char *my_strdup(char const *src);
char *my_strcpy(char *dest, char const *src);
void my_putchar(char c);
int my_strlen(char const *str);
int my_putstr(char const *str);
void my_put_nbr(int nb);
#endif
