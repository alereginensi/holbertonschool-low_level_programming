#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int binary_to_uint(const char *b);
int _putchar(char c);
int _strlen(const char *s);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);

#endif
