#include<stdio.h>
int main(){
    float temp,tempf;
    printf("Enter Temperature in Celsius = ");
    scanf("%f",&temp);
    tempf=((temp*(9.0/5.0))+32);
    printf("Temperature In Fahrenheit is = %fF \n",tempf);
    

}