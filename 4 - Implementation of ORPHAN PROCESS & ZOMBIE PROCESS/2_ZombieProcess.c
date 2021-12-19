#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

int main() 
{
    pid_t pid;
    pid = fork();
    if(pid != 0)
    {
    	sleep(50);
    }
    else
    {
    	exit(0);
    }
}


//g++ {filename.c}
//pb1 & [1]
//ps
