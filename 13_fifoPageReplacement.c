#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int front=0,back=-1,cs=0,nf;
int f[MAX];
void enq(int x);
void deq(void);
void dis(void);
int isfound(int);
void main()
{
	int pf=0,rfs,rf[15],i;
	printf("\nFIFO page replacement");
	printf("Enter the size of reference string:");
	scanf("%d",&rfs);
	printf("Enter the reference string: \n");
	for(i=0;i<rfs;i++)
		scanf("%d",&rf[i]);
	printf("\nEnter the number of free frames:");
	scanf("%d",&nf);
	enq(rf[0]);
	pf=1;
	for(i=0;i<rfs;i++)
	{
		if(!isfound(rf[i]))
		{
			pf++;
			if(cs==nf)
				deq();
			enq(rf[i]);
		}
		dis();
	}
	printf("\nNo of page faults : %d",pf);
}
int isfound(int x)
{
	int i;
	for(i=0;i<cs;i++)
		if(f[i]==x)
			return 1;
	return 0;
}
void enq(int x)
{
	if(++back==nf)
		back=0;
	f[back]=x;
	cs++;
}
void dis()
{
	int i;
	for(i=0;i<cs;i++)
		printf("%d",f[i]);
	printf("\n");
}
void deq()
{
	nf--;
	if(++front==nf)
		front=0;
	return;
}
