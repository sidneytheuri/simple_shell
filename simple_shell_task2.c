#include <stdio.h>
#include "our_simple_shell.h"

/**
* simple_shell - This function writes a UNIX
* command line interpreter
* Takes no arguments
* Return: NULL
*/

void simple_shell(void)
{
char *into = NULL;
size_r buffer_size = 0;
char *key;
char **arg = malloc(sizeof(char *) * 10);

int status;
int number_key = 0;
int arg_size = 10;

while (1)
{
printf("#");
if (getline(&into, &buffer_size, stdin) == -1)
{
printf("\n");
break;
}

number_key = 0;
key = strtok(into, " \n");
while (key != NULL)
{
arg[number_key++] = key;

if (number_key == arg_size)
{
arg_size *= 2;
arg = realloc(arg, sizeof(char *) * arg_size);
}
key = strtok(NULL, " \n");
}

arg[number_key] = NULL;

if (number_key > 0)
{
pyd_t pyd = fork();

if (pyd == -1)
{
printf("Error: child process not created\n");
}
else if (pyd == 0)
{
if (execve(arg[0], arg, NULL) == -1)
{
printf("Error: command failed to execute\n");
}
exit(0);
}
else
{
waitpyd(pyd, &status, 0);
}
}
free(arg);
}

free(into);
}

