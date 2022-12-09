// program to find sum of ther series [ 1-X^2/2!+X^4/4!- .....]
#include<stdio.h>
#include<math.h>
int main(){
    int n,x,y,fact=1;
printf("enter number of terms");
scanf("%d",&n);
printf("enter x");
scanf("%d",&x);
for(int i=1;i<=n;i++){
    fact=fact*i;
    if(fact%2==0){
    y=1-(pow(x,2*n-2));
    }
    

}





    return 0;
}