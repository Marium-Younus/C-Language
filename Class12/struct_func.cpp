#include<stdio.h>
struct student
{
	char name[10];
	int rollno;
};
//type2 void funct(int)
void info(struct student std) //define
{
	printf("Enter student name : ");
	gets(std.name);
	printf("Enter student rollno : ");
	scanf("%d",&std.rollno);
	printf("Name is %s \n",std.name);
	printf("Rollno is %d \n",std.rollno);
	
}
main()
{
	struct student s1; 
	
	info(s1);

	
}


