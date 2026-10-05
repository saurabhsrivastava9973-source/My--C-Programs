#include<stdio.h>
int palindrome(int numb,int c){
    int r;
    if (numb==0){
        return c;
    }else{
        r=numb%10;
        c=c*10+r;
        return palindrome(numb/10,c);
    }
}
int main(){
    int numb,c=0,ans;
    printf("Enter a number= ");
    scanf("%d",&numb);
    ans=palindrome(numb,c);
    if (numb==ans){
        printf("The no. %d is palindrome\n",numb);
    }else{
        printf("The No. %d is not palindrome\n",numb);
    }
}
