/*write a program to check wheather the no is +ve ,-ve or zero*/
#include<stdio.h>
main()
{
	int number ;
	printf("Enter any number: ");
	scanf("%d",&number);
	if(number > 0)
	{
		printf("%d is positive number",number);
	}
	else if(number < 0)
	{
		printf("%d is negative number",number);
	}
	else
	{
		printf("%d is zero number",number);
	}
}
