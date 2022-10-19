include<stdio.h>
#include<conio.h>


int main()
{
    int y;
	printf("\n\t enter the year to check=");
	scanf("%d",&y);
	
	if (((y%4==0)&&(y%100!=0)) || (y%400==0))
	   printf("\n\t %d is a leap year",y);
	   else 
	    printf("\n\t %d is not a leap year",y);
	
	getch();
}
