#include<stdio.h>
main()
{
	//define
	struct category	
	{
		char b_name[20];
		char b_author[20];
		char edition[10]; 
		float price;
	};
	//or
		struct category b1; //variables
	//or
		/*struct category b1;
		struct category b2;
		struct category b3;*/
		
		printf("Enter book name : ");
		gets(b1.b_name);
		printf("Enter author name : ");
		gets(b1.b_author);
		printf("Enter edition name : ");
		gets(b1.edition);
		printf("Enter price  : ");
		scanf("%f",&b1.price);
		
		printf("---------------------------------\n\n");
				
		printf("Book name is :%s \n",b1.b_name);
		printf("Book author is :%s \n",b1.b_author);
		printf("Book edition is :%s \n",b1.edition);
		printf("Book price is :%.2f \n",b1.price);			
}
