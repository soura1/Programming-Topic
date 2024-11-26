#include<stdio.h>
int main()
{

  int num1,num2,result1,result2;
  printf("Enter two integer - ");
  scanf("%d %d",&num1,&num2);

  result1 = getsum(num1,num2);  
  printf("Sum is %d\n",result1);

 result2 = cube(num1);
 printf("Cube is %d\n",result2);





}

int getsum(int x,int y)
{

   return(x + y);

}

int cube(int x)
{

  return(x * x * x);

}