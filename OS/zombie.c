
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
	int i;
	int pid = fork();
	if (pid == 0)
		for (i=0; i<3; i++)
			printf("I am Child....PID = %u my parent's PID = %u\n",getpid(),getppid());
	else
	{
		printf("I am Parent......PID = %u\n",getpid());
                sleep(15);
		printf("\n parent terminated\n");
	}
}

