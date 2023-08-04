#include<stdio.h>
main()
{
	int a,b,add,sub,mul,div,mod;
	printf("enter the value of a \n");
	scanf("%d",&a);
	printf("enter the value of b \n");
	scanf("%d",&b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	mod=a%b;
	printf("1.Addition is:%d\n2.Subtraction is:%d\n3.Multiplication is:%d\n4.Division is:%d\n5.Modulo is:%d\n ",add,sub,mul,div,mod);
	}
