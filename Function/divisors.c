#include<stdio.h>
int main()
{

    int  n;
    printf("Enter any  integer - ");
    scanf("%d",&n);
    divisor(n);
   

    

}

void  divisor(int x)
{
    int i;
   for ( i = 1; i <= x; i++)
   {
     if (x % i == 0)
     {
        printf("%d\n",i);
     }
     
   }
   

}