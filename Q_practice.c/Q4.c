
// Program to show similarity between int and char

#include <stdio.h>
int main(){
    int num;
    char ch;
    printf("enter the ch");
    scanf("%c",&ch);
    printf("enter the num");
    scanf("%d",&num);
    printf("\t Datatype \tvalue \t -1 \t +1\n ");
    printf("\t int \t\t %d \t %d \t %d \n",num,num-1,num+1);
    printf("\n \t char \t\t %c \t %c \t%c",ch,ch-1,ch+1);   
    return 0;
}