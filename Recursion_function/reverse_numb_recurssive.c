#include<stdio.h>
int reverse_numb(int numb,int ans){
    int r;
    if (numb==0){
        return ans;
    }else{
        r=numb%10;
        ans=ans*10+r;
        return reverse_numb(numb/10,ans);
    }
}
int main(){
    int numb,ans=0,c;
    printf("Enter a No.= ");
    scanf("%d",&numb);
    c=reverse_numb(numb,ans);
    printf("%d",c);
}