// Calvin Skinner
// Date Feb 19, 2019
// Fork function: parent and child

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[]){
	printf("current PID: %d\n", (int) getpid());	// Print current PID

	pid_t pid = fork();

	if(pid < 0){
		perror("failed to fork\n");	// less than 0 means error
	}else if(pid == 0){
		printf("I am the child\n");	// 0 is child
		printf("PID: %d",pid);
		pid_t child = getpid();
		printf("Child's PID: %d\n",child);
	}else if (pid > 0){
		printf("I am the parent\n");	// greater than 0 is parent
		printf("Parent's PID: %d\n", (int) getpid());
	}

	return 0;
}
