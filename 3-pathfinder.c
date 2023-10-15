#include "shell.h"

/**
 * pathfinder - func
 * @cmd: element
 * Return: cmd path
 */

char *pathfinder(char *cmd)
{
	char *pth = _getenv("PATH"), *pth_cpy;
	char **token;
	char *pth_cat = NULL;
	int i = 0, len = 0;
	struct stat info;

	if (stat(cmd, &info) == 0)
		return (cmd);

	pth_cpy = malloc(_strlen(pth) + 1);

	pth_cpy = _strcpy(pth_cpy, pth);
	token = _tkn(pth_cpy, ":");

	while (token[i])
	{
		len = _strlen(token[i]);

		if (token[i][len - 1] != '/')
			pth_cat = _strcat(token[i], "/");

		pth_cat = _strcat(token[i], cmd);

		if (stat(pth_cat, &info) == 0)
			break;

		i++;
	}

	free(pth_cpy);

	if (!token[i])
	{
		free(token);
		return (NULL);
	}

	free(token);
	return (pth_cat);
}
