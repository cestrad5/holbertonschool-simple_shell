#include "main.h"

char** tokenizer(char *line) {
    int length = 0;
    int capacity = 16;
    char **tokens = malloc(capacity * sizeof(char*));
    char *delimiters = " \t\r\n";
    char *token = strtok(line, delimiters);

    if (!tokens) {
        perror("Unable to generate tokens");
        exit(1);
    }

    while (token != NULL) {
        tokens[length] = token;
        length++;

        if (length >= capacity) {
            capacity = (int) (capacity * 1.5);
            tokens = realloc(tokens, capacity * sizeof(char*));
            if (!tokens) {
                perror("Error while allocating space for the tokens");
                exit(1);
            }
        }

        token = strtok(NULL, delimiters);
    }




    tokens[length] = NULL;
    return tokens;
}