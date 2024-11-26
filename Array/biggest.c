#include<stdio.h>
int main()
{
    int i,arr[7] = {-99,45,100,37,89,-327,245};

    int max = arr[0];

  for ( i = 1; i < 7; i++)
  {
    if (arr[i] > max)
    {
        max = arr[i];
    }
    
  }
  printf("The biggest value is %d",arr[i]);
    



}