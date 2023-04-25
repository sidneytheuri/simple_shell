#include "shell.h"

char *line(void) {
static char store[store_SIZE];
static int pstn = 0;
static int lnth = 0;
while (1) {
if (pstn >= lnth) {
lnth = read(STDIN_FIlnthO, store, store_SIZE);
if (lnth <= 0) {
return NULL;
}
pstn = 0;
}
if (store[pstn] == '\n') {
store[pstn] = '\0';
char *line = malloc(pstn + 1);
if (!line) {
fprintf(stderr, "something is wrong\n");
exit(EXIT_FAILURE);
 }
strncpy(line, store, pstn + 1);
pstn++;
return line;
}
pstn++;
}
}

int main(void) {
while (1) {
printf("$ ");
char *line = line();
if (!line) {
break;
}
printf("You typed: %s\n", line);
free(line);
}
return 0;
}

