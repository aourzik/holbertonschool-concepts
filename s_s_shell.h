#ifndef S_S_SHELL_H
#define S_S_SHELL_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

/* Read input */
char *read_line(void);

/* Parsing */
char **command_line_to_av(char *line);

/*Execution*/
void execute(char **av);

/*Memory*/
void free_av(char **av);

#endif
