#include<stdio.h>

void titleCapitilizer(char *s);

int main(){

    char sentence[101];

    printf("Enter Sentence:- ");
    scanf("%100[^\n]",sentence);

    titleCapitilizer(sentence);
    printf("%s\n",sentence);

    return 0;

}

void titleCapitilizer(char *s){

    char *ptr=s;
    int state=1;

    while(*ptr != '\0'){

        if((*ptr>=97 && *ptr<=122) && (state==1)){

            *ptr = *ptr -32;
            state=0;

        }

        else if((*ptr>=65 && *ptr<=90) && (state ==1)){
            state =0;

        }
        else if(*ptr==32 || *ptr=='\t'){
            state=1;
        
        }else if((*ptr>=65 && *ptr<=90) && (state==0)){

            *ptr = *ptr + 32;
            state =0;

        }

        ptr++;
    }
    

}
