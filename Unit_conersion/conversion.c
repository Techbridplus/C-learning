// WAP to make a tool which is used to convert units as per users demand;
#include<stdio.h>
void Kilo_to_mile(float u);
void metre_to_inch(float v);

int main(){
  float u,v;
    char ch;

    printf("for kilo to mile press A or for metre to inch press B\n");
    scanf(" %c",&ch);
    if(ch=='A'){
    Kilo_to_mile(u);
    }
    else if(ch=='B'){
        metre_to_inch(v);
    }else{
        printf("you inter invalid input");
    }
    return 0;
}
void Kilo_to_mile(float u){
    printf("enter unit");
    scanf("%f",&u);
printf("%f kilo = %f mile\n",u,0.6214*u);
}

void metre_to_inch(float v){
    printf("enter unit");
    scanf("%f",&v);
printf("%f metre = %f inch\n",v,39.3700787*v);
}