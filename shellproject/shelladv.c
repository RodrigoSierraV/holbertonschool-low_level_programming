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
  int count = 1, status;
  /* string to save data result of strtok*/
  char *string;
  /*array with values for execve*/
  char **commands;

  buffer = (char *)malloc(bufsize * sizeof(char));

  commands = malloc(30 * sizeof(char));

  if( buffer == NULL)
    {
      perror("Unable to allocate buffer");
      exit(1);
    }

  printf("$");
  characters = getline(&buffer,&bufsize,stdin);


  /*
   * read every string  with stok
   */

  string = strtok(buffer, " ");
  commands[0] = string;

  while (string != NULL)
    {
      printf("%s\n", string);
      string = strtok(NULL," ");
      commands[count] = string;
      count++;
    }


  /*
   * execve
   *
   */
  count = 0;
  while (commands[count])
    {
      printf("%d - %s\n",count, commands[count]);
      count++;
    }
  printf("parent:%u current:%u\n", getppid(), getpid());
  for (count = 0; count < 5; count++)

    {
      wait(&status);
       if ((new_pid = fork()) == 0)
	 {
	   printf("current in loop:%u\n", getpid());
	break;
	 }
    }
  if (new_pid == -1)
    {
      perror("Error:");
      return (1);
    }
  printf("current:%u\n", getpid());
  if (new_pid == 0)
    {
      printf("inside the if child:%u\n", getpid());
      printf("Wait for me, wait for me\n");      
    }
  else
    {
      wait(&status);      
      printf("Oh, it's all better now, process:%u status:%u\n", getpid(), status);
    }
  execve(commands[0], commands, NULL);
  printf("last line\n");
  return(0);
  free(buffer);
}
