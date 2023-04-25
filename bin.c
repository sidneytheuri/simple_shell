#include "shell.h"

/**
 *  exit
 */
int ex(ein *in)
{
int exitcheck;

if (in->argv[1])   
{
exitcheck = _erratoi(in->argv[1]);
if (exitcheck == -1)
{
in->status = 2;
print_error(in, "Illegal number: ");
_eputs(in->argv[1]);
_eputchar('\n');
return (1);
		}
in->err_num = _erratoi(in->argv[1]);
return (-2);
}
in->err_num = -1;
return (-2);
}
 
int en(ein *in)
{
char *s, *dir, buffer[1024];
int cr;

s = getcwd(buffer, 1024);
if (!s)
_puts("come back");
if (!in->argv[1])
{
dir = getenv(in, "HOME=");
if (!dir)
cr =  
chdir((dir = getenv(in, "PWD=")) ? dir : "/");
else
cr = chdir(dir);
}
else if (_strcmp(in->argv[1], "-") == 0)
{
if (!getenv(in, "OLDPWD="))
{
_puts(s);
_putchar('\n');
return (1);
}
_puts(getenv(in, "OLDPWD=")), _putchar('\n');
cr = /* TODO: what should this be? */
chdir((dir = getenv(in, "OLDPWD=")) ? dir : "/");
}
else
cr = chdir(in->argv[1]);
if (cr == -1)
{
print_error(in, "can't cd to ");
_eputs(in->argv[1]), _eputchar('\n');
}
else
{
envi(in, "OLDPWD", getenv(in, "PWD="));
envi(in, "PWD", getcwd(buffer, 1024));
}
return (0);
}
int chp(ein *in)
{char **arg_array;
arg_array = in->argv;
_puts(" not available");
if (0)
_puts(*arg_array);  
	return (0);
}

