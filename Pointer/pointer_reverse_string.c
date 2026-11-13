#include<stdio.h>

void reverse_String(char *s);

int main(){

    char word[15];
    
    printf("Enter a Word:- ");
    scanf("%14s",word);

    reverse_String(word);
    printf("Reversed Word:- %s\n",word);

    return 0;
}
void reverse_String(char *s){

    char *start=s;
    char *end=s;

    while(*end!=0){
        end++;
    }
    
    end--;

    while(start<end){

        char temp=*start;

        *start=*end;
        *end=temp;

        start++;
        end--;

    }    
}
