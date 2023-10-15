#include "shell.h"

/**
 * _getenv - func
 * @env: element
 * Return: char
 */

char *_getenv(char *env)
{
	int i = 0, j;
	int stat;

	while (environ[i])
	{
		stat = 1;

		for (j = 0; environ[i][j] != '='; j++)
		{
			if (environ[i][j] != env[j])
				stat = 0;
		}
		if (stat == 1)
			break;
		i++;
	}
	return (&environ[i][j + 1]);
}

/**
 * _env - func
*/
void _env(void)
{
	int i = 0, j;

	while (environ[i])
	{
		for (j = 0; environ[i][j]; j++)
			_putchar(environ[i][j]);
		_putchar('\n');
		i++;
	}
}
