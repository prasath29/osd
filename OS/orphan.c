#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
int pid = fork();
if(pid>0)
{ 
printf("parent process ID :%d\n",getpid());
printf("\n Process Terminated\n");
}
else if (pid==0)
{sleep(15);
printf("child process ......ID:%d\n",getpid());
printf("Parent-ID :%d\n\n",getppid());
}
return 0;
}
