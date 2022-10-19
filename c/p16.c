#include<stdio.h>
#include<conio.h>


void main()
{
    int n,x,a,i,j,b[3]={2,8,16};
    char s[20];
	printf("\n\t enter the decimal number :");
	scanf("%d",&n);
	for(i=0;i<3;i++)
	{
		x=n;
		j=0;
		while(x>0)
		{
			a=x%b[i];
			if(a>=10)
			s[j]=a+55; //ascci code of a=65
			else
			s[j]=a+48; //ascci code of a=48
			x=x/b[i];
			j++;
		}
		s[j]='\0';
		switch(i)
		{
		case 0: printf("\n \t binary equivalent of %d           :%s",n,strrev(s));
		break;  
		case 1: printf("\n \t total equivalent of %d            :%s",n,strrev(s));
		break;
		case 2: printf("\n \t the exadecimal equivalent of %d   :%s",n,strrev(s));
		break;	
		}
		
	}
	getch();
}
