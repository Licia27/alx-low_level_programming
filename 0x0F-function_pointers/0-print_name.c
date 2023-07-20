#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name using pointer to function
 * @name: string to add
 * @f: pointer too function
 * Return; nothing
 */
void print_name(char *name,void (*f)(char *))
{
	if (name == NULL)
		return;

	f(name);
}
