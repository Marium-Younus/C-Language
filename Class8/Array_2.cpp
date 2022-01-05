#include<stdio.h>

main()
{
		//initialization of array with basic
	int age[5] = {23,45,65,44,32};
	//-------------------------------using for loop
	for(int i=0;i<5;i++)
	{
		printf("the value is : %d \n",age[i]);
	}
	//-------------------------------using for loop
	char alphabet[]={'A','B','C','D','E','F'};
	for(int j=0;j<6;j++)
	{
		printf("the alphabet is : %c ---> %d \n",alphabet[j],alphabet[j]);
	}
}
