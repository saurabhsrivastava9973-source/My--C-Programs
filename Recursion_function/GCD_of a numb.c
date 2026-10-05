#include<stdio.h>
int gcd_numb(int a,int b){
    if (b==0){
        return a;
    }else{
        return gcd_numb(b,a%b);  
    }
}
int main(){
    int a,b,ans;
    printf("Enter a no. a= ");
    scanf("%d",&a);
    printf("Enter a no. b= ");
    scanf("%d",&b);
    ans=gcd_numb(a,b);
    printf("The GCD of a number is= %d\n",ans);
}