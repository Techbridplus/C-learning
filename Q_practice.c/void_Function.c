#include<stdio.h>
void hello(int a);

int main(){
    int a;
    printf("enter yhe value of a");
    scanf("%d",&a);

    hello(a);
    return 0;
}
void hello(int a){
    
   if(a==4){
    printf("hello gaurav");
   }else{
    printf("hello world");
   }
}