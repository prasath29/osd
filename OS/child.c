#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
int pid;
pid=fork();
if(pid==0)
printf("child process is in execution ........processID=%u and parent PID =%u\n",getpid(),getppid());
else
printf("parent process is in execution.......processID=%u\n",getpid());
return 0;
}
