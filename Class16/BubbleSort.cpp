/*C Program To Sort data in ascending order using bubble sort.*/
#include <stdio.h>
main()
{
    int data[100],i,n,step,swap;
    printf("Enter the number of elements to be sorted: ");
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
        printf("%d : Enter element: ",i+1);
        scanf("%d",&data[i]);
    }

    for(step=0;step<n-1;++step)
    for(int j=0;j<n-step-1;++j)
    {
        if(data[j]>data[j+1])   /* To sort in descending order, change > to < in this line. */
        {
            swap=data[j]; 
            data[j]=data[j+1];
            data[j+1]=swap;
        }
    }
    printf("In ascending order:\n");
    for(int k=0;k<n;++k)
         printf("%d\n ",data[k]);

}

