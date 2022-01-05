/*Take radius of a circle as input from user and calculate
 its area and circumference.*/
#include<stdio.h>
main()
{

	float radius,pi=3.142,circum,aoc;
	
	printf("Enter Radius Value : ");
	scanf("%f",&radius);
	
	circum=2*pi*radius;
	aoc=pi*radius*radius;
	
	printf("Circumference of circle is :%.2f \n ",circum);
	printf("Area of Circle : %.2f",aoc);

}
