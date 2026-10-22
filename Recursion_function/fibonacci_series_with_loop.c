#include<stdio.h>
int main(){
    int c,a=0,b=1,n;
    printf("enter a no.= ");
    scanf("%d",&n);
    printf("0,1");
    for (int i=1;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
        printf(",%d",c);
    }
}