#include<stdio.h>
int main(){
    char word[50],search;
    printf("Enter a word:- ");
    scanf("%14s",word);
    printf("Enter a character to search:- ");
    scanf(" %c",&search);
    int i=0,count=0;
    while(word[i] != '\0'){
        if(word[i]==search){
            count++;
        }
        i++;
    }
    printf("Result: '%c' appears %d times\n",search,count);
return 0;
}
