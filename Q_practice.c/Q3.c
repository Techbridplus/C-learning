// Write a C Program to swap two numbers (integers) without using third variable
#include<stdio.h>

int main(){
    int a,b;
  printf("Enter the value of A\n");
  scanf("%d",&a);
  printf("\nEnter the value of B\n");
  scanf("%d",&b);
  a = a + b;
  b = a - b;
  a = a - b;
  printf("The new value of a is %d and b is %d",a,b);

    return 0;
}

