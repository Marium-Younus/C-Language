#include<stdio.h>
#include<string.h>
main()
{
	char sentence[50];
	printf("Enter any sentence : ");
	gets(sentence);
	
	int length=strlen(sentence);
	//strlwr(sentence);
	strupr(sentence);
	strrev(sentence);	
	printf("The sentence is %s \n",sentence);
	printf("The length of the string is : %d \n\n",length);
	printf("L/U case string is : %s \n\n",sentence);
	printf("Reverse string is : %s",sentence);
}
