#include<stdio.h>
#include<conio.h>
main()
{
		FILE *fp;
		fp=fopen("student.txt","w");
		char alphabet;
		
		if(fp != NULL)
		{
			printf("File Created");
			while(alphabet != '$')
			{
				fputc('H',fp);
				alphabet = getche();
			}			
		}
		else
		{
			printf("File not Created");
		}
		fclose(fp);

}
