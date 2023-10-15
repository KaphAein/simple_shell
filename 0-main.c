#include "shell.h"

/**
 * main - simple shell
 * Return: int
 */
int main(void)
{
	char *buff = NULL, **args;
	size_t readsz = 0;
	ssize_t buffsz = 0;
	int i, exit_status = 0;
	char *prompt = "$ ";

	while (1)
	{
		if (isatty(0))
		{
			for (i = 0; prompt[i] != '\0'; i++)
				_putchar(prompt[i]);
		}
		buffsz = getline(&buff, &readsz, stdin);
		if (buffsz == -1 || _strcmp("exit\n", buff) == 0)
		{
			free(buff);
			break;
		}
		buff[buffsz - 1] = '\0';
		if (_strcmp("env", buff) == 0)
		{
			_env();
			continue;
		}
		if (line_check(buff) == 1)
		{
			exit_status = 0;
			continue;
		}
		args = _tkn(buff, " ");
		args[0] = pathfinder(args[0]);
		if (args[0] != NULL)
			exit_status = execute(args);
		else
			perror("Error");
		free(args);
	}
	return (exit_status);
}
