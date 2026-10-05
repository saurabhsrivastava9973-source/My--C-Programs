#include<stdio.h>
int power(int n,int powe){
    if (powe==0){
        return 1;
    }
    return n*power(n,powe-1);
}
int main(){
    int n,powe,ans;
    printf("Enter a base= ");
    scanf("%d",&n);
    printf("Enter a Power= ");
    scanf("%d",&powe);
    ans=power(n,powe);
    printf("The Power of a no. is= %d\n",ans);
}