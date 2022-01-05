#include<stdio.h>


struct book 
{
		char name[10];
		char author[10];
		int price;
};


main()
{
		struct book b1;
		printf("Enter book name : ");
		scanf("%s",&b1.name);
		printf("Enter author name : ");
		scanf("%s",&b1.author);
		printf("Enter book price : ");
		scanf("%d",&b1.price);
		printf("Book name is : %s \n",b1.name);
		printf("Book author is : %s \n",b1.author);
		printf("Book price is : %d ",b1.price);
		
		printf("\n--------- pointer via structure\n");
		struct book *b_ptr;
		b_ptr= &b1; 
		
		printf("Book name is : %u \n",b_ptr->name);
		printf("Book author is : %s \n",b_ptr->author);
		printf("Book price is : %d ",b_ptr->price);
			
}
