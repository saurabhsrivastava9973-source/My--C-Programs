#include<stdbool.h>
#include<stdio.h>
int main(){
    int numb;
    printf("Enter The No.");
    scanf("%d",&numb);
    bool even=(numb%2==0);
    bool odd=(numb%2!=0);
    if(even){
        printf("The no. is even");
    }else if(odd){
        printf("The no. is Odd");
    }
}