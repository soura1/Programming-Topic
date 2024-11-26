#include<stdio.h>
int main()
{
    int T;
    scanf("%d ",&T);

    while (T--)
    {
       int N,i;
       scanf("%d",&N);

       int arr[N];
       for ( i = 0; i < N; i++)
       {
            scanf("%d",&arr[i]);

       }
       int maximum ;
       maximum = arr[0];
       for ( i = 0; i < N; i++)
       {
        if (maximum < arr[i])
        {
           maximum = arr[i];
        }
       
        
       }
        printf("%d\n",maximum);
       
       
    }
    




    return 0;
}