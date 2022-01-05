#include<stdio.h>

main()
{	
	/*int row,col;
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("%d%d\t",row,col);
		
		}
		printf("\n");
	}*/
	//--------------------------- while loop
	/*int i=0; //initialize
	while(i<5)
	{
		printf("%d \n",i);
		i++;
	}
	printf("===================================while loop even check\n");
	int j=1;
	while(j<=50)
	{
		if(j%2==0)
		{
			printf("Even number :%d \n",j);
		}
		j++;
	}
	*/
	
	///==================================
	printf("--------------------Do while loop execute alteast one time\n");
	int x=1;
	do
	{
		printf("the value of x is : %d\n",x);
		x++;
		
	}
	while(x>=10);
	///==================================
	int a=0,b=0;
	do
	{
		b = b+a;
		printf(" a=%d b=%d \n",a++,b);
	}
	while(a<=10);
}
