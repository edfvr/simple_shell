#ifndef SHELL_H
#define SHELL_H

/*LIBRARIES*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <dirent.h>
#include <sys/stat.h>
#include <stdarg.h>
#include <signal.h>

#define PROMPT "$ "


/**
 * struct builtin_t - Defines the builtins functions.
 * @built: The name of the build in command.
 * @f: A pointer to the right builtin function.
 */
typedef struct builtin_t
{
	char *built;
	void (*f)(char *);
} builtin_t;

extern char **environ;


/*STRING FUNCTIONS*/
int _strlen(char *);
int _strcmp(char *, char *);
char *_strdup(char *);
void print_str(char *, int);
int print_number(int);
int _putchar(char);

/*BUILT-IN FUNCTIONS*/
int built_in(char **, char *);
void (*check_built_ins(char *))(char *);
void exit_b(char *);
void env_b(char *);
void cd_b(char *);

/*HELPER FUNCTIONS*/
void error_printing(char *, int, char *);
void exec_error(char *, int, char *);

#endif
