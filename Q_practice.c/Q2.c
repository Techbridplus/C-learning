// Write a C Program to swap two numbers (integers) using third variable
#include<stdio.h>

int main(){
    int a,b,c;
  printf("input a");
  scanf("%d",&a);
  printf("input b");
  scanf("%d",&b);
  c=b;
    b=a;
    a=c;
    printf("value of a  is %d and the value of b is %d",a,b);
    return 0;
}