#include <stdio.h>
#include "our_simple_shell.h"

/**
* main - it does the handle on paths
* @argc: Counts args made
* @arra: Pointer to args
* Return: 0 on success or 1 if otherwise
*/

int main(int argc, char *arra[])
{
pyd_t pyd;
int stat;

if (argc < 2)
{
printf("%s command [arguments....]\n", arra[0]);
return (1);
}

pyd = fork();
if (pyd == 0)
{
execev(arra[1], &arra[1]);
printf("command not found\n");
return (1);
}
else if (pyd > 0)
{
waitpyd(pyd, &stat, 0);
return (stat);
else
{
return (1);
}
}
else
{
printf("fork not successful\n");
return (1);
}
}

