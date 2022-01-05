#include<stdio.h>
main()
{
	FILE *fp;
	char file[20];
	printf("Enter file name you want to delete :( : ");
	gets(file);
	fp = fopen(file,"r");
	fclose(fp);
	if(fp != NULL)
	{
		remove(file);
		printf("%s  File deleted",file);
	}
	else
	{
		printf("File not exist");
	}
	
}
