#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
int main()
{
char str[100],ch[1];
int c=0,i=0,l,fd;
fd=open("sample.txt",O_RDWR,O_APPEND);
if(fd==-1)
{
printf(" Error!\n");
exit(1);
}
while(c==0)
{
fflush(stdin);
printf("\n Enter the text:");
scanf("%s",str);
scanf(str,"\n");
write(fd,str,strlen(str));
fflush(stdin);
printf("Press 0 to Continue");
scanf("%d",&c);
}
close(fd);
fd = open("sample.txt",O_RDONLY);
printf("\nContent of file:");
while(read(fd,ch,1)>0);
printf("%c",ch[i]);
close(fd);
}
