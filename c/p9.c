#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main()
{
	
	char s[100];
	int i;
	printf("\n\t enter the string\n\t");
	gets(s);
    printf("\tshort form is %c",toupper(s[0]));
    for (i=0;s[i]!='\0';i++)
    {
    	if (s[i]==' '&&s[i+1]!=' ')
    	{
    		printf("%c",toupper(s[i+1]));	
				}
				}
	getch();
}
