#include<stdio.h>
main()
{
	float p,r,t,si;
	printf("enter principal, rate and time\n");
	scanf("%f%f%f",&p,&r,&t);
	si=(p*r*t)/100;
	printf("Simple interest is:%.2lf",si);
}
