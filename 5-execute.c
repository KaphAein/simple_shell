#include "shell.h"

/**
 * execute - func
 * @args: element
 * Return: int
 */

int execute(char **args)
{
	int pid = fork(), status;

	if (pid == 0)
	{
		if (execve(args[0], args, environ) == -1)
			perror("Error");
	}
	else
	{
		wait(&status);
		if (WIFEXITED(status))
			status = WEXITSTATUS(status);
	}

	return (status);
}
