#include<stdio.h>

int main(){
    char word[15],search;
    int i=0,j=0;

    printf("Enter a Word:- ");
    scanf("%14s",word);

    printf("Enter A Letter To Delete:- ");
    scanf(" %c",&search);

    while (word[i]!='\0'){

        if(word[i]!=search){

            word[j]=word[i];

            j++;
        }  
        i++;
    }
    word[j]='\0';

    printf("%s\n",word);
return 0;

}
