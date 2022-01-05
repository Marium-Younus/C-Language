#include<stdio.h>
main()
{
		float percentage[3][3];
		//user input
		for(int row=0;row<3;row++)
		{
			for(int col=0;col<3;col++)
			{
				printf("Enter  Percentage [%d][%d] : ",row,col);
				scanf("%f",&percentage[row][col]);
			}
			
		}
		printf("------------------Output------\n\n");
		//user output
		for(int row=0;row<3;row++)
		{
			for(int col=0;col<3;col++)
			{
				printf("%.2f \t",percentage[row][col]);
				
			}
			printf("\n");	
		}
		
	
	
}
