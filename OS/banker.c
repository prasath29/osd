#include <stdio.h>
int main()
{
int n, r, i, j, k;
n = 5; // Indicates the Number of processes
r = 3; //Indicates the Number of resources
int alloc[5][3];
printf("Enter the allocation matrix:\n");
for (i = 0 ; i < n ; i++)
{
for (j = 0 ; j < r ; j++)
{
scanf("%d",&alloc[i][j]);
}
}
int max[5][3];
printf("Enter the Max Matrix:\n");
for (i = 0 ; i < n ; i++)
{
for (j = 0 ; j < r ; j++)
{
scanf("%d",&max[i][j]);
}
}

int avail[3];
printf("Enter the available resources:\n");
for(i = 0 ; i < r ; i++)
scanf("%d",&avail[i]);
int f[n], ans[n], ind = 0;
for (k = 0; k < n; k++)
{
f[k] = 0;
}
int need[n][r];
for (i = 0; i < n; i++)
{
for (j = 0; j < r; j++)
need[i][j] = max[i][j] - alloc[i][j];
}
int y = 0;
for (k = 0; k < 5; k++)
{
for (i = 0; i < n; i++)
{
if (f[i] == 0)
{
int flag = 0;
for (j = 0; j < r; j++)
{
if (need[i][j] > avail[j])
{
flag = 1;
break;

}
}
if (flag == 0)
{
ans[ind++] = i;
for (y = 0; y < r; y++)
avail[y] += alloc[i][y];
f[i] = 1;
}
}
}
}
printf("Th SAFE Sequence is as follows\n");
for (i = 0; i < n - 1; i++)
printf(" P%d ->", ans[i]);
printf(" P%d\n", ans[n - 1]);
return (0);
}
