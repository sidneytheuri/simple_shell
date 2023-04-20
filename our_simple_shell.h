#ifndef "OUR_SIMPLE_SHELL"
#define "OUR_SIMPLE_SHELL"

#include <string.h>
#include <unist.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

extern char **environ;
char *strtok(char *str, const char *delim);
int execve(const char *filename, char *const argv[], char *const envp[]);
ssize_t getline(char **lineptr, size_t *n, FILE *stream);
pid_t fork(void);
pid_t waitpid(pid_t pid, int *status, int options);
void free(void *ptr);
void simple_shell(void);
int main(int argc, char *arra[]);

#endif

