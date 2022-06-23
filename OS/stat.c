#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
int main()
{
struct stat buf;
stat("unix8.c",&buf);
printf("FILE MODE = %o\n",buf.st_mode);
printf("FILE SIZE = %ld\n",buf.st_size);
printf("FILE BLOCK SIZE = %ld\n",buf.st_blksize);
printf("PROCESS ID =%d\n",buf.st_gid);
printf("NO OF BLOCKS ALLOCATED = %ld\n",buf.st_blocks);
printf("NO OF HARD LINK = %u\n",(unsigned int)buf.st_nlink);
printf("File permissions User\n");
printf((buf.st_mode & S_IRUSR)?"r":"-");
printf((buf.st_mode & S_IWUSR)?"w":"-");
printf((buf.st_mode & S_IXUSR)?"x":"-");
printf("\nFile permissions Group\n");
printf((buf.st_mode & S_IRGRP)?"r":"-");
printf((buf.st_mode & S_IWGRP)?"x":"-");
printf((buf.st_mode & S_IXGRP)?"x":"-");
printf("\nFile Permissions Other\n");
printf((buf.st_mode & S_IROTH)?"r":"-");
printf((buf.st_mode & S_IWOTH)?"w":"-");
printf("\n");
return 0;
}
