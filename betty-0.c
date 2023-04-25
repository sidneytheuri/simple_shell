#include "shell.h"

/**
*search for first occurence
*/
int main(void) {
const char *string = "This is a test";
char character1 = 'a';
char character2 = 'z';
 if (strchr(string, character1) != NULL) { // can remove "!= NULL"
printf("\'%c\' was found in \"%s\".\n", character1, string);
}
else { // if character1 was not found
printf("\'%c\' was not found in \"%s\".\n", character1, string);
}
if (strchr(string, character2) != NULL) { // can remove "!= NULL"
printf("\'%c\' was found in \"%s\".\n", character2, string);
}
else {
// if character2 was not found
printf("\'%c\' was not found in \"%s\".\n", character2, string);
}

