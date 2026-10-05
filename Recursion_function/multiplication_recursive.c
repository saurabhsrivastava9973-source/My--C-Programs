#include<stdio.h>
int multiply(int numb,int i){
    if (i==0){
        return 0;
    }else{
        return numb+multiply(numb,i-1);
    }
}
int main(){
    int numb,i,ans;
    printf("Enter a no. for Multiply= ");
    scanf("%d",&numb);
    printf("Enter a no. to multiply = ");
    scanf("%d",&i);
    ans=multiply(numb,i);
    printf("%d",ans);
}