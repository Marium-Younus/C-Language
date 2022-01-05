#include<stdio.h>

main()
{
	int score[5];
	for(int i=0;i<5;i++) //user input
	{
		printf("Enter score in %d ",i);
		scanf("%d",&score[i]);	
	}
	for(int x=0;x<5;x++) //user output
	{
		printf("result is %d \n",score[x]);
	}
}
