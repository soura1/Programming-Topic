#include<stdio.h>
float add(float x,float y)
{

  return  x + y;

}
float sub(float x,float y)
{

  return  x - y;

}
float multi(float x,float y)
{

  return  x * y;

}

float divide(float x,float y)
{

  return x / y;

}
int main()
{

    float num1,num2,addition,subtract,multiply,division;
    printf("Enter two integer - ");
    scanf("%f %f",&num1,&num2);
    
     addition = add(num1,num2);
     subtract = sub(num1,num2);
     multiply = multi(num1,num2);
     division = divide(num1,num2);

    printf("Add - %f\n",addition);
    printf("sub - %f\n",subtract);
    printf("multi - %f\n",multiply);
    printf("divide - %f\n",division);


}

