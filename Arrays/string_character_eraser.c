/*Write a program To Erase a User defined character*/

#include<stdio.h>

int main(){
    char word[15],delete;

    printf("Enter a Word:- ");
    scanf("%14s",word);

    printf("Enter A Letter To Delete:- ");
    scanf(" %c",&delete);

     int i=0,j=0;

    while (word[i]!='\0'){

        if(word[i]!=delete){

            word[j]=word[i];

            j++;
            /*It Just Shift The no. if two letter not mix*/
        }  

        i++;
    }

    word[j]='\0';

    printf("%s\n",word);

    return 0;

}
