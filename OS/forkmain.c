
#include<stdio.h>
#include<unistd.h>
int main()
{
pid_t p;
p=fork();
if(p<0)
 printf("Error in creating process\n.");
else if(p==0)
 printf("Child is executing  process id = %d, parent process is %d\n", getpid(),getppid());
else
 printf("Parent is executing = %d\n",getppid());
}
