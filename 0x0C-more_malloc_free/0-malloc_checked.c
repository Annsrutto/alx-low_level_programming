#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - assign malloc
* @b: to be stored
* Return:int
*/

void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == NULL)
	{
		exit(98);
	}
	else
	{
		return (m);
	}
}
