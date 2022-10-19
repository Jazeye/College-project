#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char s[50],r[50];
	printf("\n\t enter the string=");
	gets(s);
	strcpy(r,s);
	if (strcmp(strrev(s),r)==0)
	   printf("\n\t %s is palindrom",r);
	   else 
	    printf("\n\t %s is not palindrom",r);
	getch();
}
