#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,x,n,s,ub,lb,digits;
	char str[10];
	printf("\n enter lower bound=");
	scanf("%d",&lb);
	printf("\n enter upper bound=");
	scanf("%d",&ub);
	printf("\n armstrong numbers within %d and %d \n\n",lb,ub);
	for(n=lb;n<=ub;n++)
	{
		s=0;
		x=n;
		digits=sprintf(str,"%d",n);
		while(x>0)
		{
			a=x%10;
			s=s+pow(a,digits);
			x=x/10;
		}
		if(s==n)
		printf(" %d ",n);
		
	}
	getch();
}
