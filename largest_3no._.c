#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter The Value of a=");
    scanf("%d",&a);
    printf("Enter The Value of b=");
    scanf("%d",&b);
    printf("Enter The Value of c=");
    scanf("%d",&c);
    if (a>b && b>c){
        printf("a is greatest");
    }else if (b>a && b>c){
        printf("b is greatest");
    }else if (b>a && c>b){
        printf("c is greatest");
    }else if (a>b && c>b && a>c){
        printf("a is greatest");
    }else if (a>b && c>b && c>a){
        printf("c is greatest no.");
    }
}