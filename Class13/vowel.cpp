#include<stdio.h>
#include<string.h>

main()
{
	
	char *ptr,word[20];
	int vowel=0;
	printf("Enter your sentence :");
	gets(word);
	
	ptr = &word[0];

	for(int i=0;i<strlen(word);i++)
	{
		if(*ptr == 'a' ||*ptr =='e'||*ptr =='i' ||*ptr =='o'||*ptr =='u'||
		*ptr =='A'||*ptr =='E'||*ptr =='I' ||*ptr =='O'||*ptr =='U')
	
			vowel=vowel+1;
			ptr++;//marium

	}
	printf("The Word is %s \n",word);
		printf("The Vowel count of that word is %d",vowel);
	
}

