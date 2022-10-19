#include<stdio.h>
#include<conio.h>
long factorial(int);

int main()
{
	int x,c;
	long f;
	printf("\n\t enter the number=");
	scanf("%d",&x);
	f=factorial(x);
	printf("\tfactorial of %d =%d",x,f);
	getch();
}
	long factorial(int n)
	{
		if(n==0)
		return 1;// 0! =1
		else
		return n*factorial(n-1);
	}
