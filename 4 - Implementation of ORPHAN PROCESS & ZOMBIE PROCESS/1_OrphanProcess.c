#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

int main() 
{
    pid_t pid;
    pid = fork();
    if(pid==0)
    {
        sleep(6);
        printf("\nI'm Child. My PID = %d and PPID = %d\n", getpid(), getppid());
    }
    else
    {
        printf("\nI'm Parent. My Child PID = %d and my PID = %d\n", pid, getpid());
    }
    printf("\nTerminating PID = %d\n", getpid());
    return 0;
}
