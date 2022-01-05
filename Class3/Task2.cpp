/*Take two integers from user and calculate their sum, difference,
 product and quotient. Also give the remainder of given integers.*/
 #include<stdio.h>
 main()
{
	int num1,num2,sum,diff,mul,div,remind;//variables
	printf("Enter 1st number : ");
	scanf("%d",&num1);
	
	printf("Enter 2nd number : ");
	scanf("%d",&num2);
	
	sum=num1+num2;
	diff=num1-num2;
	mul=num1*num2;
	div=num1/num2;
	remind=num1%num2;
	
	printf("Add result is %d \n",sum);
	printf("Sub result is %d \n",diff);
	printf("Mul result is %d  \n",mul);
	printf("Div result is %d \n",div);
	printf("Remainder result is %d",remind);


}

