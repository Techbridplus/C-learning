#include<stdio.h>
int sum(int a,int b);
int num(int c,int g);

int main(){
    int a,b;
    printf("enter the value of a and b\n");
    scanf("%d %d",&a,&b);
    int v=sum(a,b);
    num(a,b);
    printf("sum of a and b is : %d",v);
    return 0;
}
int sum(int x,int y){
    if(x<=y){
    return x+y;
    }else{
        return x-y;
    }
}
int num(int c,int g){
    if(c<=g){
        printf("hello world");

    }else{
        printf("hello gaurav");
    }
    return 0;
}