#include<stdio.h>
#include<conio.h>


int main()
{
    int n,i,j,a[50][50];
	printf("\n\t order of the square matrix =");
	scanf("%d",&n);
	printf("\n\t the matrix A is\n");
	for(i=0;i<n;i++)
	{
		printf("\n\n\t");
		for(j=0;j<n;j++)
		{
			if(i==j)
			a[i][j]=0;
			else if(i<j)
			a[i][j]=1;
			else
			a[i][j]=-1;
			printf("%4d",a[i][j]);
			
		}
	}
	
	getch();
}
