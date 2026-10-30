/*Write a program to count no. of times letter is Repeated*/
#include<stdio.h>

int main(){
    char word[25],search;

    printf("Enter a word:- ");
    scanf("%24s",word);

    printf("Enter a Letter to search:- ");
    scanf(" %c",&search);
    if(search>=65 && search<=90){
        search=search+32;

    }

    int i=0,count=0;
    while(word[i]!='\0'){

        if(word[i]>=65 && word[i]<=90){
            word[i]=word[i]+32;

        }if(word[i]==search){
            count++;

        }

        i++;

    }

    printf("--------------\n");
    printf("Result:-- '%c' appears %d times in %s\n",search,count,word);
    return 0;
}


