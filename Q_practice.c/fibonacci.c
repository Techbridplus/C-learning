#include<stdio.h>
void fib(int n){
static int n1=0,n2=1,n3;//what is static int ????
if(n>0){
n3=n1+n2;
n1=n2;
n2=n3;
printf("%d,",n3);
 fib(n-1);
}
}
int main(){
int n,n1=0,n2=1;
printf("enter number of terms");
scanf("%d",&n);

printf("%d,%d,",n1,n2);
fib(n-2);
    return 0;
}