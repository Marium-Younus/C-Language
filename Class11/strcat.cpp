#include<stdio.h>
#include<string.h>
main()
{
	char firstname[10],lastname[10];
	printf("Enter First Name");
	gets(firstname);
	printf("Enter last Name");
	gets(lastname);
	
	printf("my full name is %s ",strcat(firstname,lastname));
}
