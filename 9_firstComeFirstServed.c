#include<stdio.h>
//#include<conio.h>
//#include<process.h>

int main()
{
    char p[10][5], temp[5];
    int c = 0, pt[0], i, j, n, temp1;
    float bst = 0.0, turn = 0.0;
    //clrscr();
    printf("Enter no. of processes: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("Enter process %d name: ", i+1);
        scanf("%s", p[i]);
        printf("Enter process time: ");
        scanf("%d", &pt[i]);
        printf("\n");
    }
    printf("\n.................................\n");
    for(i=0; i<n; i++)
    	printf("|\t%s\t", p[i]);
    printf("|\n.................................\n");
    for(i=0; i<n; i++)
    	printf("\t\t%d", pt[i]);
    printf("\n.................................\n");
    printf("0");
    
    for(i=0; i<n; i++)
    {
        bst += c;
        turn += c+pt[i];
        c = c+pt[i];
        printf("\t\t%d", c);
    }
    printf("\nAverage time is %f: ", bst/n);
    printf("\nTurn around time is %f", turn/n);
    return 0;
}
