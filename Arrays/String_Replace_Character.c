#include<stdio.h>
int main(){
    char input[15],oldchar,newchar;
    printf("Enter a Word:- ");
    scanf(" %14s",input);
    printf("Enter a Letter You want To Change:- ");
    scanf(" %c",&oldchar);
    printf("Enter a Word Yo will Change To:- ");
    scanf(" %c",&newchar);
    int i=0;
    while(input[i]!='\0'){
        if(input[i]==oldchar){
            input[i]=newchar;
        }
        i++;
    }
    printf("%s\n",input);
return 0;
}
