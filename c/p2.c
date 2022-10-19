#include<stdio.h>
#include<conio.h>

int main()
{
	int i,n,a=1,b=0,c=0;
	printf("\n enter the limit \t");
	scanf("%d",&n);
	printf("\n\t Fibonacci series:");
	for(i=1;i<=n;i++)
	{
		printf("\t%d",c);
		c=a+b;
		a=b;
		b=c;
		
	}
	getch();
}
