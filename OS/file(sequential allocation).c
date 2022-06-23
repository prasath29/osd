#include<stdio.h>
#include<stdlib.h>
void main()
{
int f[50], i, st, len, j, c, k, count = 0;
char fn[20];
for(i=0;i<50;i++)
f[i]=0;
do
{
count=0;
printf("Enter the File Name: ");
scanf("%s",fn);
printf("Enter starting block of the file: ");
scanf("%d", &st);
printf("Enter the length of the file: ");
scanf("%d",&len);
for(k=st;k<(st+len);k++)
if(f[k]==0)
count++;
if(len==count)
{
if(j!=(st+len-1))
printf("\nFILE %s is allocated a space in disk\n---------------------\n",fn);
for(j=st;j<(st+len);j++)
if(f[j]==0)
{
f[j]=1;
printf("Block[%d] -> ",j);
}
}
else
printf("\nDisk Space not allocated to the file\n");
printf("\n---------------------\nDo you wish to add more file (1 - ADD / 0 - EXIT) : ");
scanf("%d", &c);
}while(c==1);
}
