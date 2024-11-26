#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the size of array A - ");
    scanf("%d",&n);

    int A[n];

    printf("Enter the element of array - \n");
    for( i = 0; i < n; i++)
    {
        scanf("%d",&A[i]);
    }
    

    int B[n];


    
    for ( i = 0; i < n; i++)
    {
        B[i] = A[i];
    }
    
  printf("The element for B - \n");
    
    for ( i = 0; i < n; i++)
    {
        printf("%d ",B[i]);
    }

}