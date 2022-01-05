#include<stdio.h>
main()
{
//	int maths;
//	int eng;
//	int urdu;
//	int phy;
//	int chem;
	int maths,eng,urdu,phy,chem;
	float percentage;
	char sym ='%';
	printf("Enter your maths marks:");	
	scanf("%d",&maths);
	printf("Enter your Eng marks:");	
	scanf("%d",&eng);
	printf("Enter your urdu marks:");	
	scanf("%d",&urdu);
	printf("Enter your physics marks:");	
	scanf("%d",&phy);
	printf("Enter your chemistry marks:");	
	scanf("%d",&chem);
	
	int total = maths+eng+urdu+phy+chem;
	percentage=(total*100)/500;
	printf("my obtained marks is :%d \n",total);
	printf("my percentage marks is :%.2f %c",percentage,sym);
}




