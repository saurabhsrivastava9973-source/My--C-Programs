#include<stdio.h>
int count_numb(int n){
    if (n==0){
        return 0;
    }
    return 1+count_numb(n/10);
}
int main(){
    int n,ans;
    printf("Enter a No.= ");
    scanf("%d",&n);
    if (n==0){
        printf("The no. of digit is= 1");
    }else{
        ans=count_numb(n);
        printf("The no. Of Digits is = %d\n",ans);
    }
    
    

}