#include<stdio.h>
#include<conio.h>

int main()
{   
    FILE *oddfp, *evenfp;
	int n,i;
	char str[100];
	printf("\n enter no of records\t");
	scanf("%d",&n);
	evenfp=fopen("evet.txt","w");
	oddfp=fopen("odd.txt","w");
	if(oddfp==NULL || evenfp==NULL)
    {
    	printf("can't open files to writes..!");
    	"return;";
	}
	fprintf(evenfp,"Even numbers");
	fprintf(oddfp,"odd numbers");
	for(i=0;i<=n;i++)
	{
		if (i%2==0)
		fprintf(evenfp,"%4d",i);
		else
		fprintf(oddfp,"%4d",i);
	}
	fclose(evenfp);
	fclose(oddfp);
    evenfp=fopen("evet.txt","r");
	oddfp=fopen("odd.txt","r");
	if(oddfp==NULL || evenfp==NULL)
	{
		printf("cant open files to read");
		"retun;";
	}
	fgets(str,100,evenfp);
	puts(str);
	fgets(str,100,oddfp);
	puts(str);
	fclose(evenfp);
	fclose(oddfp);
	getch();
}
