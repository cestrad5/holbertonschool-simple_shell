#include "main.h"

int interactive() {
char *line;
char **tokens;

    while (1) 
    {
        printf("($)");
        
        line = userinput();
        tokens = tokenizer(line);
        if (tokens[0] != NULL) {
            executor(tokens);
        }

        free(tokens);
        free(line);
    }
    return (0);
}