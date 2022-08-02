#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main (void)
{
	pid_t child_pid;
	int status;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error");
		return (1);
	}
	if (child_pid == 0)
	{
		printf("Wait for me na, don't you know that i'm a baby\n");
		sleep(3);
	}
	else
	{
		wait(&status);
		printf("Oh, it's all better now.. Let's go home\n");
	}
	return (0);
}
