#include<stdio.h>
main()
{


	printf("-------------------print 1- 10 ASC order \n");
	for(int i=1;i<=10;i++)
	{
		printf("the value of i is : %d \n",i);
		
	}
	printf("------------------print 10-1 DEC order \n");
	for(int i=10;i>=1;i--)
	{
		printf("the value of i is : %d \n",i);
		
	}
	printf("Write a program to take input from user and print table \n");
	int table,j;
	printf("Enter any number: ");
	scanf("%d",&table);	
	for(j=1;j<=10;j++)
	{

		printf("%d * %d = %d \n",table,j,(table*j));
	}
	//printf("Write a program to print even number b/w 1-50 \n"); home work
		printf("Write a program to print ASCII code chararcter:");
	for(int n=32;n<=127;n++)
	{
		printf("%d = %c \t",n,n);
	}
}
