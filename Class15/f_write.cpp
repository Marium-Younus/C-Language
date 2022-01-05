#include<stdio.h>
main()
{
	FILE *fp;
	fp = fopen("file1.txt","w");
	if(fp != NULL)
	{
		printf("File exist");
	}
	else
	{
		printf("File not exist");
	}
	
}
