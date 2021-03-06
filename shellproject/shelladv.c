#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int input(char *s,int length);

int main()
{
  /*
   * getline function
   *
   */
  pid_t new_pid, my_pid, parent;
  char *buffer;
  size_t bufsize = 32;
  size_t characters;
  int count = 1, status, lenbuf = 0;
  /* string to save data result of strtok*/
  char *string;
  /*array with values for execve*/
  char **commands;
  char *proof[] = {"/bin/ls", NULL};

  buffer = (char *)malloc(bufsize * sizeof(char));

  commands = malloc(30 * sizeof(char));

  if( buffer == NULL)
    {
      perror("Unable to allocate buffer");
      exit(1);
    }
  printf("#cisfun$");
  characters = getline(&buffer,&bufsize,stdin);
  /* read every string  with stok   */
  while (buffer[lenbuf])
    lenbuf++;
  printf("lenbuf:%d\n", lenbuf - 1);
  string = strtok(buffer, " \n");
  commands[0] = string;
  while (string != NULL)
    {
      printf("%s\n", string);
      string = strtok(NULL," \n");
      commands[count] = string;
      count++;
    }
  /* execve*/
  count = 0;
  while (commands[count])
    {
      printf("%d - %s\n",count, commands[count]);
      count++;
    }
  printf("parent:%u current:%u\n", getppid(), getpid());
  for (count = 0; count < 5; count++)
    {
       if ((new_pid = fork()) == 0)
	break;
       if (new_pid == -1)
	 {
	   perror("Error:\n");
	   return (1);
	 }
       if (new_pid > 0)
	 wait(&status);
    }
  printf("before execve\n");
  execve(commands[0], commands, NULL);
  printf("last line\n");
  return(0);
  free(buffer);
}
