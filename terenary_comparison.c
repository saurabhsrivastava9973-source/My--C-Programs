#include<stdio.h>
int main(){
    int a,b;
    printf("Enter The Value Of a= ");
    scanf("%d",&a);
    printf("Enter The Value Of b= ");
    scanf("%d",&b);
    int max=(a>b)?a:b;
    printf("%d",max);
}