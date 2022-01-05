
#include<stdio.h>
main()
{
	int a,b;
	printf("Enter a value : ");
	scanf("%d",&a);
	
	printf("Enter b value : ");
	scanf("%d",&b);
	
	if(a>b && a!=b) 
	{
		printf("%d is greater and not equal with %d",a,b);		
	}
	else
	{
	  printf("%d is lesser and  equal with %d",a,b);
	}
}
