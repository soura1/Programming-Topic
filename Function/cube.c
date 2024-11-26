#include<stdio.h>
int main()
{

  int x,result;
  printf("Enter any integer number - ");
  scanf("%d",&x);
   result = cube(x);
  printf("Cube is %d\n",result);



}

int cube(int number)
{
   return( number * number * number);

}