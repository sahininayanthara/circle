#include <stdio.h>
int main()
{
	float radius=10.0f;
	float area;
	float circumference;
	float PI=3.142f;
	float diameter;
	
	printf("radius of the circle : %.2f\n",radius);
	
	diameter=radius/2;
	printf("diameter of the circle : %.2f\n",diameter);
	
	area=PI*radius*radius;
	printf("area of the circle : %.2f\n",area);
	
	circumference=2*PI*radius;
	printf("circumference of the circle : %.2f\n",circumference);
	return 0;
}