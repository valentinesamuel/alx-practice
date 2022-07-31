#include <stdio.h>
#include <stdlib.h>

/*used getline to receive text and print the text and its length*/
int main (int argc, char **argv)
{
	size_t bytes_read;
	size_t nbytes = 100;
	char *my_string;

	printf("Please enter a line of text => ");

	my_string = (char *) malloc(nbytes + 1);
	bytes_read = getline(&my_string, &nbytes, stdin);

	if (bytes_read == -1)
	{
		printf("Error !!");
		return (-1);
	}
	else
	{
		printf("You typed => %s\n", my_string);
		printf("%zu were read\n", bytes_read);
	}
	return (0);
}
