#include<stdio.h>
int sequence(int n){
    if (n==0){
        return 0;
    }else{
        printf("%d\n",n);
        return sequence(n-1);
    }
}
int main(){
    int n;
    printf("Enter a no.= ");
    scanf("%d",&n);
    sequence(n);
}