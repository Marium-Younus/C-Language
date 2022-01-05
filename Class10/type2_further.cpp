#include<stdio.h>
void sum(float num1,float num2)
{
	printf("Sum result is : %.2f \n \n",(num1+num2));
	
}
void makeloop(int start,int end)
{
	for(int i=start;i<=end;i++)
	{
		printf("loop is :%d \n",i);
	}
	
}
main()
{
	
	sum(5.5,5.6);
	makeloop(20,45);
}
