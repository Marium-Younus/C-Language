#include<stdio.h>
main()
{
	//declare
	int score[3][3]={10,20,30,40,50,60,70,80,90};
	
	printf("%d %d %d \n",score[0][0],score[0][1],score[0][2]);
	printf("%d %d %d \n",score[1][0],score[1][1],score[1][2]);
	printf("%d %d %d",score[2][0],score[2][1],score[2][2]);
	
	//declare another way 
	printf("-----------------------------------------\n\n");
	int age[2][3]={{34,56},{89,45}};
	printf("%d %d %d \n",age[0][0],age[0][1],age[0][2]);
	printf("%d %d %d",age[1][0],age[1][1],age[1][2]);
	
}
