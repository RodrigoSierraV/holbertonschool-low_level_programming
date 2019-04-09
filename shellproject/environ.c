#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
extern char **environ;
char *_getenv(const char *name);

int main(int ac, char **av)
{
  int i = 0;

  printf("env:%s\n", getenv(av[1]));
  printf("localenv:%s\n", _getenv(av[1]));
  return (0);

}
char *_getenv(const char *name)
{
  int i = 0, b = 0, c = 0;
  char **test = environ;

  printf("name:%s \n", name);
  while (test[i])
    {
      b = 0;
      while (name[b])
	{
	  if (name[b] == test[i][b])
	    c++;
	  else
	    break;
	  b++;
	}
      if (strlen(name) == c)
	{
	  strtok(environ[i], "=");
	  return(strtok(NULL, "="));
	}
      i++;
    }
  return (NULL);
}
