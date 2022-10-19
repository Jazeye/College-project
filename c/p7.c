#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	double t=1,s=0;
	int i;
	printf("\n\n sum of the series 1+(1/2)^2+(1/3)^3 +....");
	printf("\n---------------------------------------------");
	for(i=1;;i++)
	{
	t =1/ pow(i,i);
	if(t<0.0001)
	break;
	printf("\n\t%d)^%d = %f\n",i,i,t);
	s = s + t;
	}
		printf("\n\t the sum of the above series = %f",s);
	getch();
}
