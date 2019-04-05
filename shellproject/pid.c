#include <stdio.h>
#include <unistd.h>
#include <math.h>
/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
  pid_t my_pid;
  pid_t parent_pid;

  my_pid = getpid();
  parent_pid = getppid();
  printf("my%u parent:%u size:%f\n", my_pid, parent_pid, pow(2, 22));
  return (0);
}
