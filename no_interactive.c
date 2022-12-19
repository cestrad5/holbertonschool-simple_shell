#include "main.h"

int no_interactive() 
{
char *line;
char **tokens;
  
        printf("($)");
        line = userinput();
        tokens = tokenizer(line);

        if (tokens[0] != NULL) {
            executor(tokens);
        }

        free(tokens);
        free(line);
 return (0);  
}