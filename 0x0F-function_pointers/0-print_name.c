#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the name to print
 * @f: printing style function
 * Return: None
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
