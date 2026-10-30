/*Write A program To delete numbers and show only word 
without numbers*/

#include<stdio.h>

int main(){

    char word[15];

    printf("Enter a Word:- ");
    scanf("%14s",word);

    int i=0,j=0;

    while(word[i]!='\0'){

        if((word[i]>=65 && word[i]<=90) || (word[i]>=97 && word[i]<=122)){
            
            word[j]=word[i];
            j++;

        }

        i++;
    
    }

    word[j]='\0';
    printf("%s\n",word);

    return 0;
}
