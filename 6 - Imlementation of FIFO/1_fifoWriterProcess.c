#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<sys/stat.h>
#include<fcntl.h>

int main()
{
    int fd, nbw;
    char str[100];
    mknod("/home/iprincekumark/Desktop/OS-Lab/myfile.txt", S_IFIFO|0666, 0);
    printf("Writing for reader Process:\n\t");
    fd = open("/home/iprincekumark/Desktop/OS-Lab/myfile.txt",O_WRONLY);
    while(fgets(str, sizeof(str), stdin))
    {
         nbw = write(fd, str, strlen(str)-1);
         printf("Writer process write %d bytes: %s\n", nbw, str);
    }
    return 0;
}
