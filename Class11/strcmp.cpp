#include<stdio.h>
#include<string.h>
main()
{
	char book1[20],book2[20];
	printf("Enter 1st book name ");
	gets(book1);
	printf("Enter 2nd book name ");
	gets(book2);
	
	int value=strcmp(book1,book2);
	if(value == 0)
	{
		printf("already provided name which is same");
	}
	else if(value == -1)
	{
			printf("%d book1 name is smaller then book2",value);
	}
	else
	{
		printf("%d book1 name is greater then book2",value);
	}
	
}
