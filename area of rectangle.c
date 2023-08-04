#include<stdio.h>
main()
{
	float length,width,area;
	printf("Enter the lenth and width of reactangle\n");
	scanf("%f%f",&length,&width);
	area=length*width;
	printf("Area of rectangle is %.2lf",area);
}
