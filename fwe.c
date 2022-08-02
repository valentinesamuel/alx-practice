#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
	pid_t child_pid;

	child_pid = fork();

	if (child_pid == -1)
	{
		perror("Error");
		return (1);
	}
	if (child_pid == 0)
	{
	/*a child process that is running*/
		fork();
		fork();
		printf("A child process is running\n");
		fork();
		/*fork();*/
	}
	else
	{
		/*NOT a child proces running*/
		printf("A parent running\n");
	}
	return (0);
}
