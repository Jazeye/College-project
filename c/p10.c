#include<stdio.h>
#include<conio.h>

int main()
{
	
	
	int i,x,sum,notes[10]={2000,500,200,100,50,20,10,5,2,1};
	long n;
	printf("\n\t enter the amount =");\
	scanf("%d",&n);
	sum=0;
    printf("\n\tcurrency denomination of %d\n",n);
    for (i=0;i<10;i++)
    {
    	x=n/notes[i];
    	n=n%notes[i];
    	printf("\n\t\t no of currencies of %4d = %d",notes[i],x);
    	sum=sum+x;
    }
    printf("\n\n\t total number of currencies =%d",sum);
	getch();
}
