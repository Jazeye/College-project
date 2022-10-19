#include<stdio.h>
#include<conio.h>
#include<math.h>


int main()
{
    float x1,y1,x2,y2,gdistance;
    
	printf("enter x1:");
	scanf("%f",&x1);
	printf("enter y1:");
	scanf("%f",&y2);
	printf("enter x2:");
	scanf("%f",&x1);
	printf("enter y2:");
	scanf("%f",&x1);
	gdistance=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
	printf("Distance between the said points: %4f",sqrt(gdistance));
	printf("\n");
	return 0;
	
	
	getch();
}
