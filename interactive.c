#include "shell.h"
/**
* interactive - Runs the shell as interactive mode
* Return: executed command or error
*/


int interactive(){
pid_t child_pid;
char *command[80];
char *token, *line = NULL, *path_command = NULL;
size_t i, n;
int status = 0;

while (1) {
    printf("($)");
    signal(SIGINT, continuePROM);

    if (getline(&line, &n, stdin) == EOF)
        break;


    if (*line == '\n' || *line == '\t')
        continue;
    token = strtok(line, " \t\n");
    for (i = 0; i < 80 && token != NULL; i++){
        command[i] = token;
        token = strtok(NULL, " \t\n");
    }
    command[i] = NULL;
    if (command[0] == NULL)
    continue;
    path_command = pathfinder(command[0]);
    if (builtin(command[0]) == 0){
        child_pid = fork();
        if (child_pid == 0){
            if (execve(path_command, command, environ))
                perror("execve"), free(line), exit(EXIT_FAILURE);
        }
        if (child_pid > 0)
            wait(&status), free(line);
    }
    line = NULL, token = NULL;
    command[0] = NULL;
}
free(line);
free(path_command);
exit(status);
}

void continuePROM(int signal)
{
(void) signal;
write(STDIN_FILENO, "\n($)", 4);
}

