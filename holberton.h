#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

typedef struct print_data
{
   const char form;
   int (*print)(va_list *lalista, int*);
}print_data_t;

int _printf(const char * format, ...);
int _putchar(char c);
/* task 0 */
int print_char (va_list *lalista, int *tot);
int print_str (va_list *lalista,int *tot);
int print_percent (int *tot);


#endif /* HOLBERTON_H */
