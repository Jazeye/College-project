#include<stdio.h>
#include<conio.h>


void main()
{
    int a[50],b[50],c[100],m,n,i,j,k=0;
	printf("\n\t size of 1st Array =");
	scanf("%d",&m);
	 printf("\n\t elements of 1st array in stored order \n");
	 for(i=0;i<m;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 printf("\n size of 2nd array =");
	 scanf("%d",&n);
	printf("\n element of 2nd array in stored order \n");
	for(i=0;i<n;i++)
	{
		scanf("\t\t%d",&b[i]);
	}
	i=0, j=0,k=0;
	while(i<m&& j<n)
	{
		if (a[i]<b[i])
		c[k++]=a[i++];
		else
		c[k++]=b[j++];
	}
	while(i<m)
	c[k++]=a[i++];
	while(j<n)
	c[k++]=b[j++];
	printf("Array after merging:");
	for (i=0;i<m+n;i++)
	printf("%d ",c[i]);
	getch();
}
