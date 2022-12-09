#include<stdio.h>

int main(){
    int n,count=0;
    printf("enter n");
    scanf("%d",&n);
    for(int i=1;n!=0;i++){
        n=n/10;
       count= count+1;
    }
    printf("%d",count);
    return 0;
}