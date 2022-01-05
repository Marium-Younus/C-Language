#include<stdio.h>

main()
{
	char *c1 ="Pakistan";
	char *c2 ="India";
	char *c3 ="Srilanka";
	
	char *country[3];
	
	country[0] = c1;
	country[1] = c2;
	country[2] = c3;
	
	printf("---------Pointer Value------------\n");
	printf("First Country is %s \n",c1);
	printf("2nd Country is %s \n",c2);
	printf("3rd Country is %s \n",c3);
	
	printf("---- pointer value address-----\n");
	printf("c1 = %u \n",&c1);
	printf("c2 = %u \n",&c2);
	printf("c3 = %u \n",&c3);
	

	printf("----Pointer Value shifted to array index-----\n");
	printf("Country[0] = %s \n",country[0]);
	printf("Country[1] = %s \n",country[1]);
	printf("Country[2] = %s \n",country[2]);
	
	printf("------------- array index address-----\n");
	printf("Country[0] = %u \n",&country[0]);
	printf("Country[1] = %u \n",&country[1]);
	printf("Country[2] = %u \n",&country[2]);
	

}
