#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t my_pid;
	pid_t pid;

	printf("Before fork\n");
	pid = fork();
	if (pid == -1)
	{
		perror("Error: ");
		return(1);
	}
	printf("After fork\n");
	my_pid = getpid();
	printf("My pid si %u\n", my_pid);
	return (0);
}
