/*Sorting Elements of an array in ascending order using insertion sort algorithm*/
#include<stdio.h>
int main()
{
	int data[100],n,temp,i,j;
	printf("Enter number of terms(should be less than 100): ");
	scanf("%d",&n);//5
	
	for(i=0;i<n;i++)  //{3,2,4,5,6}
	{
		printf("%d . Enter elements: ",i+1);
		scanf("%d",&data[i]);
	}
	
	for(i=1;i<n;i++)
	{
		temp = data[i]; //0 // 3
		j=i-1;  // 3
		while(temp<data[j] && j>=0) //3<3 && 3>=0
/*To sort elements in descending order, change temp<data[j] to temp>data[j] in above line.*/
		{
			data[j+1] = data[j];  //3+1=4 4=3
			--j; //
		}
		data[j+1]=temp;
	}
	printf("In ascending order: ");
	for(i=0; i<n; i++)
		printf("%d\t",data[i]);
    return 0;
}
