#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Prototype for _atoi function in 100-main.c */
int _atoi(char *s);

/* Prototype for _strcpy function in 9-strcpy.c */
char *_strcpy(char *dest, char *src);

/* Prototype for 8-print_arrays.c*/
void print_array(int *a, int n);

/* Prototype for puts_half function in 7-main.c file */
void puts_half(char *str);

/* Prototype for puts2 function in 6-main.c file */
void puts2(char *str);

/* Prototype for rev_string function in 5-main.c file */
void rev_string(char *s);

/* Prototype for print_rev function in 4-main.c file */
void print_rev(char *s);

/* Prototype for _puts function in 3-main.c file */
void _puts(char *str);

/* Prototype for _putchar function in _putchar.c file */
int _putchar(char c);

/* Prototype for _strlen function in 2-strlen.c file */
int _strlen(char *s);

/* Prototype for swap_int function in 1-swap.c file */
void swap_int(int *a, int *b);

/* Prototype for reset_to_98 function in 0-reset_to_98.c file */
void reset_to_98(int *n);

#endif /* MAIN_H */
