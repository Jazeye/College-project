#include<stdio.h>
#include<conio.h>

int main()
{
	int n,digits,i,j;
	char str[15];
	printf("\n\t enter the number");
	scanf("%d",&n);
	digits=sprintf(str,"%d",n);
	for(i=0;i<digits;i++)
	{
		printf("\n\n\t");
		for(j=i;j<digits;j++)
		{
			printf("%c ",str[j]);
		}
		
	}
	getch();
}
