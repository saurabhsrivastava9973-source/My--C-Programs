/*Write A program To replace a letter from a user defined Word & change a letter 
to a user Defined Letter*/
#include<stdio.h>

int main(){

    char word[15],oldletter,newletter;

    printf("Enter a Word:- ");
    scanf(" %14s",word);
    printf("\n");
    printf("Which Letter To Change:- ");
    scanf(" %c",&oldletter);

    printf("Letter Will Change To:- ");
    scanf(" %c",&newletter);

    int i=0;

    while(word[i]!='\0'){

        if(word[i]==oldletter){
            word[i]=newletter;

        }

        i++;

    }

    printf("\nNew Word:- %s\n",word);

return 0;

}

