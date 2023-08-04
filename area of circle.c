#include<stdio.h>
#define PI 3.14
main()
{
	float r,area;
	printf("Enter the radius of circle\n");
	scanf("%f",&r);
	area=PI*r*r;
	printf("Area of circle is%.2lf",area);
	
}
