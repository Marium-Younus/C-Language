#include<stdio.h>

main()
{
	//initialization of array with basic
	int age[5] = {23,45,65,44,32};
	printf("-----------------------------------basic initialize-----\n");
	printf("The first element is in array : %d \n",age[0]);
	printf("The first element is in array : %d \n",age[1]);
	printf("The first element is in array : %d \n",age[2]);
	printf("The first element is in array : %d \n",age[3]);
	printf("The first element is in array : %d \n",age[4]);
	printf("-----------------------------------Without size initialize-----\n");
	float marks[] ={45.5,67,8.45,34.5,98.77,45.66};
	printf("1st marks is : %.2f \n",marks[0]);
	printf("1st marks is : %.2f \n",marks[1]);
	printf("1st marks is : %.2f \n",marks[2]);
	printf("1st marks is : %.2f \n",marks[3]);
	printf("1st marks is : %.2f \n",marks[4]);
	printf("1st marks is : %.2f \n",marks[5]);
	printf("-----------------------------------Partial initialize-----\n");
	int height[5]={3,4};
	printf("height is : %d \n",height[0]);
	printf("height is : %d \n",height[1]);
	printf("height is : %d \n",height[2]);
	printf("height is : %d \n",height[3]);
	printf("height is : %d \n",height[4]);
	printf("----------------------------------- initialize all zeros-----\n");
	int price[6]={0};
	printf("Price is : %d \n",price[0]);
	printf("Price is : %d \n",price[1]);
	printf("Price is : %d \n",price[2]);
	printf("Price is : %d \n",price[3]);
	printf("Price is : %d \n",price[4]);
	printf("Price is : %d \n",price[5]);

}
