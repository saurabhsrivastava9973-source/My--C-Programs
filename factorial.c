#include<stdio.h>
int main(){
    int n,s;
    s=1;
    printf("Enter The Value of n= ");
    scanf("%d",&n);
    for(int i=1;i<=n;i+=1){
    s=s*i;
    }
    printf("The factorial of n=%d\n",s);
    
}