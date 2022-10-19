#include<stdio.h>
 struct complex
 {
 	float real,imaginary;
 };
 int main()
 {
 	struct complex n1,n2,sum;
 	printf("Enter real and imaginary part of first complex number  :  ");
 	scanf("%f%f",&n1.real,&n1.imaginary);
 	printf("First complex number :  %0.2f+i%0.2f",n1.real,n1.imaginary);
 	printf("\nEnter real and imaginary part of second complex number  :  ");
 	scanf("%f%f",&n2.real,&n2.imaginary);
 	printf("\nSecond complex number :  %0.2f+i%0.2f",n2.real,n2.imaginary);
 	sum.real=n1.real+n2.real;
 	sum.imaginary=n1.imaginary+n2.imaginary;
 	printf("\n\nsum of two complex no: is %0.2f +i%0.2f",sum.real,sum.imaginary);
 	return 0;
 	
 }
