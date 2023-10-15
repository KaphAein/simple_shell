#include "shell.h"

/**
 * _strcmp - func
 * @s1: element
 * @s2: element
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);

		s1++;
		s2++;
	}
	return (0);
}

/**
 * _strcpy - func
 * @s1: element
 * @s2: element
 * Return: char
 */
char *_strcpy(char *s1, char *s2)
{
	char *c = s1;

	while (*s2 != '\0')
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return (c);
}

/**
 * _tkn - func
 * @s: element
 * @delim: element
 * Return: char
 */

char **_tkn(char *s, char *delim)
{
	char *aux, **spl;
	int i = 0;

	aux = strtok(s, delim);
	spl = (char **)_calloc(100, sizeof(char *));

	if (!spl)
	{
		free(spl);
		return (NULL);
	}

	while (aux)
	{
		spl[i] = aux;
		aux = strtok(NULL, delim);
		i++;
	}
	return (spl);
}

/**
 * _strcat - func
 * @s1: element
 * @s2: element
 * Return: @s1
 */

char *_strcat(char *s1, char *s2)
{
	int a, b;

	for (a = 0; s1[a] != '\0'; a += 1)
	{}

	for (b = 0; s2[b] != '\0'; b += 1)
	{
		s1[a] = s2[b];
		a++;
	}
	s1[a] = '\0';
	return (s1);
}

/**
 * _strlen - func
 * @s: element
 * Return: int
 *
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
