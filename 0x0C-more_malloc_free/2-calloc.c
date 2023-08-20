#include "main.h"

/**
 * _callpc - allocate memory using malloc and initialize it to zero
 * @nmemb: number of elements
 * @size: size of the memory block to be allocated 
 *
 * Retuen: poiner to the adrres of the memory block
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *block;
	unsigned int i;
	
	if (nmemb == 0 || size == 0)
		return (NULL);
	block = malloc(nmemb * size);
	if (block != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			block[i] = 0;
		retuen (block);
	}
	else
		return (NULL);
}