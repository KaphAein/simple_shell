#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>

int _strcmp(char *s1, char *s2);
char *_strcpy(char *s1, char *s2);
char *pathfinder(char *cmd);
char **_tkn(char *s, char *delim);
char *_strcat(char *s1, char *s2);
int _strlen(char *s);
char *_getenv(char *env);
void *_calloc(unsigned int memb, unsigned int size);
void _env(void);
int execute(char **args);
int line_check(char *line);
int _putchar(char c);

extern char **environ;

#endif
