#include<stdio.h>
int main()
{
    int N,i,X;
    scanf("%d %d",&N,&X);
    int found = 0;

    int A[N];
    for ( i = 0; i < N; i++)
    {
        scanf("%d",&A[i]);
    }

    for ( i = 0; i <N; i++)
    {

    if (A[i] == X)
    {
        found = 1;
        break;
    }

    }
    if (found)
    {
    
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    



    return 0;
}