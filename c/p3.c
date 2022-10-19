#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,r,k=0;
	printf("\n number of lines\t");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		printf("\n\n\t");
		for(j=1;j<=r-i;j++)
		{
			printf("  "); //space +space
		}
	    for(k=1;k<=i;k++)
		{
			printf(" *  "); //space +star+space+space
		}
	}
	getch();
}
