#include<stdio.h>
int gcd(int a, int b){
    if (b==0){
        return a;
    }else{
        return gcd(b,a%b);
    }
}
int main(){
    int a,b,ans,lcm;
    printf("Enter a no. a= ");
    scanf("%d",&a);
    printf("Enter a no. b= ");
    scanf("%d",&b);
    ans=gcd(a,b);
    lcm=(a*b)/ans;
    printf("%d",lcm);
}