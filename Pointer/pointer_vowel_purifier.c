#include<stdio.h>

void removeVowels(char *s);

int main(int argc, char *argv[]){

    if(argc!=2){

        printf("Usage :- ./<word>\n");

        return 0;

    }

    char *word=argv[1];

    removeVowels(word);

    printf("%s\n",word);

    return 0;
}

void removeVowels(char *s){

    char *reader =s;
    char *writer=s;

    while(*reader!=0){

        if(*reader!=65 && *reader!=69 && *reader!=73 && *reader!=79 
        && *reader!=85 && *reader!=97 && *reader!=101 &&*reader!=105
        && *reader!=111 && *reader!=117){

            *writer=*reader;
            writer++;

        }

        reader++;

    }

    *writer='\0';    
}
