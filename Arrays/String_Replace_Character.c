/*Write A program To replace a letter from a user defined Word
to a user Defined Letter*/
#include<stdio.h>

int main(){

    char input[15],oldchar,newchar;

    printf("Enter a Word:- ");
    scanf(" %14s",input);

    printf("\nWhich Letter To Changes:- ");
    scanf(" %c",&oldchar);

    printf("Letter Will Changes To:- ");
    scanf(" %c",&newchar);

    int i=0;

    while(input[i]!='\0'){

        if(input[i]==oldchar){
            input[i]=newchar;

        }

        i++;

    }

    printf("\nNew Word:- %s\n",input);

return 0;

}

