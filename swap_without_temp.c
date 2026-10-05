#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a = ");
    scanf("%d",&a);
    printf("Enter b = ");
    scanf("%d",&b);
    b=a+b;
    a=b-a;
    b=b-a;
    
    printf("So, a = %d\nb = %d\n",a,b);

}