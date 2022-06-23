#include<stdio.h>
#include<string.h>
void firstFit(int bsf[], int m,int psf[], int n)
{
int alloc[n];
for(int i=0;i<n;i++)
alloc[i]=-1;
for (int i = 0; i < n; i++)
{
for (int j = 0; j < m; j++)
{
if (bsf[j] >= psf[i])
{
alloc[i] = j;
bsf[j] -= psf[i];
break;
}
}
}
printf("\nProcess No.\tProcess Size\tBlock no.\n");
for (int i = 0; i < n; i++)
{
printf("%d\t\t%d\t\t",i+1,psf[i]);
if (alloc[i] != -1)
printf("%d",alloc[i] + 1);
else
printf("Not Allocated");
printf("\n");
}
}
void bestFit(int bsb[], int m,int psb[], int n)
{
int alloc[n];
for (int i = 0; i < n; i++)
alloc[i] = -1;
for (int i = 0; i < n; i++)
{
int bestIdx = -1;
for (int j = 0; j < m; j++)
{
if (bsb[j] >= psb[i])
{
if (bestIdx == -1)
bestIdx = j;
else if (bsb[bestIdx]> bsb[j])
bestIdx = j;
}
}
if (bestIdx != -1)
{
alloc[i] = bestIdx;
bsb[bestIdx] -=psb[i];
}
}
printf("\nProcess No.\tProcess\tSize\tBlock no.\n");
for (int i = 0; i < n; i++)
{
printf("%d\t\t%d\t\t",i+1, psb[i]);
if (alloc[i] != -1)
printf("%d",alloc[i] + 1);
else
printf("Not Allocated");
printf("\n");
}
}
void worstFit(int bsw[], int m,int psw[], int n)
{
int alloc[n];
for (int i = 0; i < n; i++)
alloc[i] = -1;
for (int i = 0; i < n; i++)
{
int wstIdx = -1;
for (int j = 0; j < m; j++)
{
if (bsw[j] >= psw[i])
{
if (wstIdx == -1)
wstIdx = j;
else if (bsw[wstIdx] < bsw[j])
wstIdx = j;
}
}
if (wstIdx != -1)
{
alloc[i] = wstIdx;
bsw[wstIdx] -= psw[i];
}
}
printf("\nProcess No\tProcess Size\tBlock no\n");
for (int i = 0; i < n; i++)
{
printf("%d\t\t%d\t\t",i+1,psw[i]);
if (alloc[i] != -1)
printf("%d",alloc[i] + 1);
else
printf("Not Allocated");
printf("\n");
}
}
void main()
{
int m,n,bsfirst[10],bsworst[10],bsbest[10],psfirst[10],psworst[10],psbest[10];
printf("Enter no.of blocks : ");
scanf("%d",&m);
printf("Enter no.of processors: ");
scanf("%d",&n);
printf("Enter the size of Each Block\n----------\n");
for(int i=0;i<m;i++)
{
printf("Block [%d] : ",i);
scanf("%d",&bsfirst[i]);
bsworst[i]=bsfirst[i];
bsbest[i]=bsfirst[i];
}
printf("Enter the size of Each Processor\n----------\n");
for(int i=0;i<n;i++)
{
printf("Processor [%d] : ",i);
scanf("%d",&psfirst[i]);
psworst[i]=psfirst[i];
psbest[i]=psfirst[i];
}
printf("\n-------FIRST FIT-------\n");
firstFit(bsfirst, m, psfirst, n);
printf("\n-------BEST FIT-------\n");
bestFit(bsworst, m, psworst, n);
printf("\n-------WORST FIT-------\n");
worstFit(bsbest, m, psbest, n);
}
