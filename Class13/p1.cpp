#include<stdio.h>


main()
{
	int rupee=1000,currency=34000,amount=900,*ptr1,*ptr2,*ptr3;
	ptr1 = &rupee;
	ptr2 = &currency;
	ptr3 = &amount;
	
	printf("The address of the rupee is %u \n ",ptr1);
	printf("The value of the rupee is %d ",rupee);
	printf("\n\n");
	printf("The address of the currency is %u \n ",ptr2);
	printf("The value of the rupee is %d ",currency);
	printf("\n\n");
	printf("The address of the amount is %u \n ",ptr3);
	printf("The value of the rupee is %d \n\n",amount);
	//----------------------------------------------------------
	printf("This is another way to point the address and its value\n\n");
	printf("The add of the rupee is %u ",&amount);
	printf("The add of the rupee is %d ",*(&amount));
		printf("This is another way to point the address and its value\n\n");
	printf("The add of the rupee is %x ",&amount);
	printf("The add of the rupee is %d ",*(&amount));

}
