#include<stdio.h>
int main(){
    int n,s;
    s=0;
    printf("Enter a nth term");
    scanf("%d",&n);
    for(int i=1;i<=n;i+=1){
        s=s+i;
    }printf("The Sum Of nth no.=%d\n",s);
}