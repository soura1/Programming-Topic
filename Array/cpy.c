#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter size of array - ");
    scanf("%d",&n);

    int array[n];

    
    printf("Enter %d element - \n",n);
    for (i = 0; i < n; i++)
    {
        printf("Element - %d : ",i);
        scanf("%d",&array[i]);
    }
    
    printf("The elememnt of he array are -\n ");
    
    for ( i = 0; i < n; i++)
    {
       printf("%d ",array[i]);
    }
    
    return 0;



}