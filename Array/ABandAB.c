#include<stdio.h>
int main()
{
    int i;

    float A[5];

    printf("Enter fisrt array elements A - \n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%f",&A[i]);
    }
    
    float B[5];

    printf("Enter second array elemnt B - \n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%f",&B[i]);
    }

     float AB[5];

    for ( i = 0; i < 5; i++)
    {
       AB[i] = A[i] + B[i]; 
    }
    
    printf("Value of AB- ");
    for ( i = 0; i < 5; i++)
    {
        printf("%.2f ",AB[i]);
    }
    


}