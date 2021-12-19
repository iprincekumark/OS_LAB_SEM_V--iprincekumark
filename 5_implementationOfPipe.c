#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<sys/types.h>
#include<sys/wait.h>

int main()
{
    pid_t pid;
    char arr[100], str[100];
    int fd[2], nbr, nbw;
    pipe(fd);
    pid = fork();
    
    if(pid == 0)
    {
        printf("\nEnter a String: ");
        fgets(str,sizeof(str),stdin);
        nbw = write(fd[1], str, strlen(str)-1);
        printf("Child wrote %d bytes\n", nbw);
        exit(0);
    }
    else
    {
        nbr = read(fd[0], arr, sizeof(arr));
        arr[nbr] = '\0';
        printf("Parent read %d bytes: %s\n", nbr, arr);
    }
    return 0;
} 
