/*Minicalculator via switch case*/
#include<stdio.h>
main()
{
	int num1,num2;
	char oper;
		printf("Enter any arithematic operators +,-,*,/ : ");
	scanf("%c",&oper);
	
	printf("Enter 1st number: ");
	scanf("%d",&num1);
	
	

	printf("Enter 2nd number: ");
	scanf("%d",&num2);	

	
	
	switch(oper)
	{
		case '+':
			printf("Add result is : %d",(num1+num2));
		
		
		case '-':
			printf("Sub result is : %d",(num1-num2));
			
		
		case '*':
			printf("Mul result is : %d",(num1*num2));
		
			
		case '/':
			printf("Div result is : %d",(num1/num2));
			break;
			
		default:
			printf("not an operator");
			break;
		
	}

}
