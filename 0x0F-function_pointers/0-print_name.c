#include "function_pointers.h"
#include <stdio.h>
/**
  * print_name - func that prints a name
  * @name: name to be printed
  * @f: pointer to function
  */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
