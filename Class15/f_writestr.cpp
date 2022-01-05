#include<stdio.h>
#include<string.h>
main()
{
	FILE *fp;
	char str[100],filename[50];
	printf("Enter your filename : ");
	gets(filename);
	fp=fopen(filename,"a");
	printf("Enter your description : ");
	gets(str);
	fwrite(str,1,strlen(str),fp);
	
	fclose(fp);
	
	
	
}
