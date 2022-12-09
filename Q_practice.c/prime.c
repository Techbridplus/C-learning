#include<stdio.h>

int main(){
    int n,b;
    printf("enter n");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
     b=n%i;
     if (b==0){
        break;
     }
   
       }
        
       if(b==0){
        printf("number is not prime");

       }else{
        printf("number is  prime");
       }
      
    
    return 0;
}