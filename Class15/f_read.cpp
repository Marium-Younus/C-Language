#include<stdio.h>
main()
{
	char fn[100],ch;
	FILE *fp;	
	printf("Enter your file name tosee the data:");
	gets(fn);
	fp= fopen(fn,"r");
	printf("You see the data of this file:%s \n\n",fn);
	while((ch = fgetc(fp)) != EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
}
