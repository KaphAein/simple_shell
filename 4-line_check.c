#include "shell.h"

/**
 * line_check - checks for empty line
 * @line: line
 * Return: 0 or 1 (int)
 */

int line_check(char *line)
{
	int i;

	for (i = 0; line[i] != '\0'; i++)
	{
		if (line[i] != ' ')
			return (0);
	}
	return (1);
}
