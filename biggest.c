//write a programm to sort the given n numbers
#include<stdio.h>

void main()
{
    int n,i,j,temp;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++) //n-1 passes
    {
        for(j=0;j<n-1-i;j++) //n-1-i comparisons
        {
            if(a[j]>a[j+1]) //n-1-i comparisons
            {
                temp=a[j]; //n-1-i assignments
                a[j]=a[j+1]; //n-1-i assignments
                a[j+1]=temp; //n-1-i assignments
            }
        }
    }
    printf("The sorted array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
