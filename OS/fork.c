#include<stdio.h>
#include<unistd.h>
int main()
{
      printf("Unix system call");
      fork();
      fork(); 
      fork();
      printf("fork system call\n");
      printf("process id = %d\n",getpid());
}
