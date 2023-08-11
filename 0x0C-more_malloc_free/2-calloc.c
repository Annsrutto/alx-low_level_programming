nclude <stdlib.h>
#include "main.h"
/**
    * _calloc - allocates memory
      * @nmemb: array
        * @size: element size
	  * Return: pointer to allocated memory
	    */
void *_calloc(unsigned int nmemb, unsigned int size)
{
		char *p;
			unsigned int i, num;

				if (nmemb == 0 || size == 0)
						{
									return (NULL);
										}
					num = nmemb * size;
						p = malloc(nmemb * size);
							if (p == NULL)
									{
												return (NULL);
													}
								for (i = 0; i < num; i++)
										{
													p[i] = 0;
														}
									return (p);
}
