#include <stdio.h>
#include <unistd.h>

/**
 * gets pid and ppid
 * */
int main(void)
{
	pid_t my_pid;
	pid_t my_ppid;

	my_pid = getpid();
	my_ppid = getppid();
	printf("The parent id of %u is %u\n", my_pid, my_ppid);
	return (0);
}
