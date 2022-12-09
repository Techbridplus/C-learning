// hum yaha dekhege ki void mai humne value change kari lekin main mai change nahi hui;
#include<stdio.h>
void calprize(float value){
        value = value +(0.18*value);//kyuki yaha par upper ki value ki copy aati hai;isliye yaha value change hone se upper ki value change nahi hoti;
    printf("final value is:%f",value);
}

int main(){
    float value =100.0;
    
    printf("value is:%f\n",value);//yaha pr value 100.0 hi rahegi; 
    calprize(value);
    return 0;
}
