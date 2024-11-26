#include<stdio.h>
int main()
{
  int num1,num2,maximum,minimum;
  printf("Enter two integer - ");
  scanf("%d %d",&num1,&num2);
  maximum = max(num1,num2);
  minimum = min(num1,num2);

printf("Maximum is %d\n",maximum);
printf("Minimum is %d\n",minimum);


}

int max(int x, int y)
{

  if (x > y)
  {
     return x;
  }
  else{

    return y;
  }


}

int min(int x, int y)
{

  if (x < y)
  {
     return x;
  }
  else{

    return y;
  }


}