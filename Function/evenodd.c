#include<stdio.h>
int main()
{

    int number;
    printf("Enter any integer - ");
    scanf("%d",&number);

    if (cheaknum(number))
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }



}

int cheaknum(int n)
{

   return n % 2 == 0;

}