#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter 1st No. a= ");
    scanf("%d",&a);
    printf("Enter 2nd No. b= ");
    scanf("%d",&b);
    printf("Enter 3rd No. c= ");
    scanf("%d",&c);
    if (a>=b){
        printf("a is greatest");
    }else if (b>c>a){
        printf("b is greatest");
    }else if (c>a>b){
        printf("c is greatest");
    }
}