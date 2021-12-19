#include<stdio.h>
#include<unistd.h>
int main()
{
    fork();
    printf("1 - LINUX\n");
    fork();
    printf("2 - UNIX\n");
    fork();
    printf("3 - RED HAT\n");
    return 0;
}
