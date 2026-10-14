#include<stdio.h>
int fibo(int a,int b,int n){
    int next;
    printf("%d",a);
    next=a+b;
    a=b;
    b=next;
    if (n==1){
        return 0;
    }else{
        printf(",");
        return fibo(a,b,n-1);  
    }
}
int main(){
    int n,a=0,b=1;
    printf("Enter a no.= ");
    scanf("%d",&n);
    fibo(a,b,n);
    printf("\n");
}