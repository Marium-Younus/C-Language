#include<stdio.h>
#include<string.h>
main()
{
char str1[20] ="kolachi";
char str2[20] ="karachi";
printf("Old city name is %s \n",str1);
strcpy(str1,str2);
printf("New city name is %s\n",str1);

}
