#include "shell.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @memb: array
 * @size: size
 * Return: pointer or NULL
 */

void *_calloc(unsigned int memb, unsigned int size)
{
	unsigned int idx = 0;
	char *p = NULL;

	if (memb == 0 || size == 0)
		return (NULL);

	p = malloc(memb * size);

	if (p == NULL)
		return (NULL);

	for (; idx < (memb * size); idx++)
		p[idx] = 0;

	return (p);
}
