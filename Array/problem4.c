#include<stdio.h>
int main()
{

    int i,evensum = 0,oddsum = 0, A[5];

    printf("Enter elements of array - \n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("The values in arrays - \n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d \n",A[i]);
    }
    
    printf("Some of even numbers - ");
    for ( i = 0; i < 5; i++)
    {
        if (A[i] % 2 == 0)
        {
            evensum = evensum + A[i];
        }
        
    }
    
    printf("%d\n",evensum);

    printf("Some of odd numbers - ");
    for ( i = 0; i < 5; i++)
    {
        if (A[i] % 2 != 0)
        {
            oddsum = oddsum + A[i];
        }
        
    }
    
    printf("%d\n",oddsum);


}