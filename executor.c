#include "main.h"

void executor(char **args) 
{
    pid_t child_pid;
    
    child_pid = fork();
    if (child_pid == -1)
    {
        perror("Error forking");
    }  
   
    if (child_pid == 0) 
    {
        execvp(args[0], args);
        perror("Error while excuting the command");
        exit(1);
    } else 

    wait(NULL);
  
    
}