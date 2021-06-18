//program to find area of a circle
#include <stdio.h>
int main()
{
	float area,r; //vaariable declaration
	printf("Enter the radius of the circle\n"); //output to the  user
	scanf("%f",&r);//intput by the user
	
	area=(3.142*r*r);//formula to find area
	
	printf("Area is:%.3f",area); //output opf the area
	
	return 0;
}