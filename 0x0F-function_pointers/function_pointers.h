#ifndef FUNCTION_POINTERS_H
#define FUCNTION_POINTERS_H

#include <stdlib.h>
#include <stddef.h>

void print_name(char *name, void (*f)(char *));

#endif
