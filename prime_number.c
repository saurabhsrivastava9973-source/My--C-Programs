#include<stdio.h>
int main(){
    int x;
    printf("Enter the value of ");
    scanf("%d",&x);
    if (x%2!=0 && x%3!=0 && x%5!=0 && x%7!=0 && x%11!=0){
        printf("The no. is Prime\n");
    }else{
        printf("The no. is not prime\n");
    }
}