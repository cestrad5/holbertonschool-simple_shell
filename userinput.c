#include "main.h"

char* userinput() {
    char *line = NULL;
    size_t buflen = 0;
    ssize_t strlen;
    strlen = getline(&line, &buflen, stdin);
    
    if (strlen ==-1) {
        printf("Error capturing the input ....\n");
    }

  
    return line;
}
