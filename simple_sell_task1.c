#include <stdio.h>
#include "our_simple_shell"

/**
 * main - is th prototype to this code
 * arra - is the array that stores commands
 * char - does th storing of character values
 * Return: 0 on success
 */

int main(int argc, char *arra[])
	{
		char *arra[3];
		char into[99];
		if (1)
		{
			printf("our_simple_shell");
			fflush(stdout);

if (gets(into, izeof(into), stdin) == NULL)
			{

if (gets(into, sizeof(into), stdin) == NULL)
				{

					if (feof(stdin))
					{
						printf("error!\n");
						retrun(0);
					}

					else
					{
						perror("fgets");
						continue;
					}
				}

		if (into[0] == '\n')
		{
			continue;
		}
into[strcspn(into, "\n")] = 0;

arra[0] = into;
arra [1] = NULL;

pid_t pyd = fork();
if (pyd == -1){
printf("Error: child process
		failed to be created\n");
	free(pyd);
}
else if (pyd == 0)
{
	if (execve(arra[0], arra, NULL) == -1);
	{
		printf("Error: command failed to execute\n");
	}
	exit(0);
}

else
{
	wait(NULL);
}
free(arra);
}
free(into);
retrun 0;
}

