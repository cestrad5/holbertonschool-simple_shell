#include "shell.h"
/**
* interactive - Runs the shell as no interactive mode
* Return: executed command or error
*/

int no_interactive()
{
pid_t child_pid;
char *command[80], *token, *line = NULL, *path_command = NULL;
size_t i, n;
int status = 0;

if (getline(&line, &n, stdin) == EOF)
return 0;
token = strtok(line, " \t\n");
for (i = 0; i < 80 && token != NULL; i++){
    command[i] = token;
    token = strtok(NULL, " \t\n");
    }
    command[i] = NULL;
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
line = NULL;
token = NULL;
command[0] = NULL;
free(line);
free(path_command);
exit(status);
}
