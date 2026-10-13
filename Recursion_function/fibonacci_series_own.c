#include<stdio.h>
int fibo(int a,int b,int n){
    int c;
    printf("%d",a);
    c=a+b;
    a=b;
    b=c;
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