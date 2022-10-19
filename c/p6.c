#include<stdio.h>
#include<conio.h>

int main()
{    
    
	int r,c,a[20][20],t[20][20],i,j;
	printf("\n\t order of matrix");
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)
	{   
	    for(j=0;j<c;j++)
	    {
	    	printf("matrix[%d][%d] = ",i,j);
	    	scanf("%d",&a[i][j]);
	    	t[j][i]=a[i][j];
		}
		
		
	}
	printf("\n\tmatrix[%d][%d]\n\n\t\t",r,c);
	for(i=0;i<=r;i++)
	{
	for(j=0;j<c;j++)
	{
	   printf("%4d",a[i][j]);
	   	
	}
	 printf("\n\t\t");
	}
	
	printf("\n\n\tTranspos[%d][%d]\n\n\t\t",c,r);
	for(i=0;i<=c;i++)	
	{
	for(j=0;j<r;j++)
	{
	printf("%4d",t[i][j]);	
	}	
	
	 printf("\n\t\t");
}
	getch();
}
