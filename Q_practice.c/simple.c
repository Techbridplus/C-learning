#include<stdio.h>
#include<math.h>

int main(){
    int p,r,t,A;
    printf("enter the value of principal,rate and time");
    scanf("%d %d %d",&p,&r,&t);
    //printf("the S.I is :%.3f \n",(p*r*t)/(float)100);
    printf("the C.I is :%.3f \n",p*(pow((1+(float)r/100),t)));
    return 0;
}