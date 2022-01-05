#include<stdio.h>


void square(int i)		//-----------------define
{
	printf("Square of the %d = %d \n",i,(i*i));
	
}
void age(int x) 	//-----------------define
{
	printf("My age is : %d",x);
}

void table(int tbl)
{
	printf("Enter any number: ");
	scanf("%d",&tbl);
	for(int a=1;a<=10;a++)
	{
		printf(" %d * %d = %d \n",tbl,a,(tbl*a));
	}
}

main()
{
	//square(6); //calling
	//age(23);
	table(0);
}
