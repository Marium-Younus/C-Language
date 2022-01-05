#include<stdio.h>
main()
{
	
	char letter = 'A';
	int rollno =101;
	float obmarks = 467.89;
	printf("\t\t\twe are talking about variables");//1
	printf("\n");
	printf("%c %d %.2f",letter,rollno,obmarks);//2
	printf("\n");
	printf("%.2f %d %c",obmarks,rollno,letter);//2
		
	printf("\n");
	printf("\n");
	printf("%c \n",letter);
	printf("%d \n",rollno);
	printf("%.0f",obmarks);
	
}
