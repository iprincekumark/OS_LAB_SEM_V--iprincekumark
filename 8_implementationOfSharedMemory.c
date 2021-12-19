#include<stdio.h>
#include<string.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<sys/types.h>

int main()
{
    key_t key;
    int shmid;
    
    key = ftok("MSG", 'A');
    
    shmid = shmget(key, 1024, 0666|IPC_CREAT);
    char* ptr = (char*)shmat(shmid, NULL, 0);
    
    printf("\nInput Data: ");
    fgets(ptr, 512, stdin);
    
    printf("\nThe Data stored : %s\n", ptr);
    shmdt(ptr);
    
    shmctl(shmid, IPC_RMID, NULL);
    
    return 0;
}
