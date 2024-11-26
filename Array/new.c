#include<stdio.h>
int main()
{

    int i,sum = 0;

    //printf("Enter the size of array - ");
    //scanf("%d",&n);

    int arr[5];

    printf("Enter the element of array- \n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("The sum of elemet of array is - ");

    for ( i = 0; i < 5; i++)
    {
        sum = sum + arr[i];

        //printf("%d\n",arr[i]);
    }
    
    //sum = arr[0] + arr[1] + arr[3] + arr[4] + arr[5];
    printf("%d",sum);

}