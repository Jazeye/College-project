#include<stdio.h>
#include<conio.h>

int main()
{    
    
	int n,flag=1,i;
	printf("\n\t enter the number");
	scanf("%d",&n);
	if(n<2)
	{
		printf("\n\t%d is not a prime",n);
		
	}
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
	}
	if(flag==0)
	printf("\n\t=%d is not prime number",n);
	else
	printf("\n\t=%d is a prime number",n);
	getch();
}
