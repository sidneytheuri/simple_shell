#include <stdio.h>
#include "our_simple_shell.h"

/**
* handle_argument - does command line argument
* @argc: argument is counter
* @arra: argument is victor
* Return: 0 for success
*/

int handle_argument(int argc, char *arra[])
{
int a;

for (a = 0 ; a < argc ; a++)
{
printf("argument %d: %s\n", a, arra[a]);
}
return (0);

}
/**
* main - is the point of entry
* @argc: argument is counter
* @arra: argument is victor
* Return: 0 on success
*/

int main(int argc, char *arra[])
{
handle_argument(argc, arra);

return (0);
}

