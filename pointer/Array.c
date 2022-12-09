#include<stdio.h>

int main(){
    int a[10]={1,2,3,4,5};
    printf("%d",a[9]);
    int *ptr = &a[2];
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
    a[5]=9;
    printf("%d\n",a[5]);
    printf("%d\n",a[1]);
    a[1]=0;
    printf("%d\n",a[1]);
    return 0;
}