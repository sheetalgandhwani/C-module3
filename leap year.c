#include<stdio.h>
main()
{
	int year;
	printf("enter year\n");
	scanf("%d",&year);
	if(((year%4==0)&&(year%100!=0))||(year%400==0))
	{
		printf("It is leap year\n");
		
	}
	else
	{
		printf("It is not leap year");
	}
}
