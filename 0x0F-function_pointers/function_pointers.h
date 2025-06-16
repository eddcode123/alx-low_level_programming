#ifndef _FUNC_PTR_
#define _FUNC_PTR_

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
