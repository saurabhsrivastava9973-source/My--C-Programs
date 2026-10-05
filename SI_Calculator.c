#include<stdio.h>
int main(){
    float p,r,t,si;
    printf("Enter a Principle =₹");
    scanf("%f",&p);
    printf("Enter a rate (in percentage) = ");
    scanf("%f",&r);
    printf("Enter a time (in years) = ");
    scanf("%f",&t);
    si=((p)*(r)*(t))/(100);
    printf("Your Simple Intrest is =₹%f \n",si);

}