#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>
#include <errno.h>
#include <stdbool.h>

int interactive(void);
int no_interactive(void);
char* userinput();
char** tokenizer(char *line);
void executor(char **args);

#endif