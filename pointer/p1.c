#include<stdio.h>

int main(){
 float *ptr;
 float x;
 ptr=&x;
 *ptr=0;
 *ptr+=5;
 (*ptr)++;
 printf("x = %f\n",x);
 printf("*ptr = %f\n", ptr);
    return 0;
}