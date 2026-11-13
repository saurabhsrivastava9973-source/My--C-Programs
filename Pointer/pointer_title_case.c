#include<stdio.h>

void titlecapital(char *s);

int main(){

    char sentence[101];
    printf("Input Your Sentence:- ");

    scanf("%100[^\n]",sentence);
    
    titlecapital(sentence);
    printf("%s\n",sentence);
    return 0;

}

void titlecapital(char *s){
    char *ptr=s;
       
    if(*(ptr)>=97 && *(ptr)<=122){
        *ptr=*ptr-32;
    }
    
    ptr=ptr+1;
    
    while(*ptr!='\0'){
    
        if(*ptr>=97 && *ptr<=122){
    
            if(*(ptr-1)==' '){
                *ptr=*ptr-32;
            }
            
        }
        else if(*ptr>=65 && *ptr<=90){
    
            if(*(ptr-1)!=' '){
                *ptr=*ptr+32;
            }
            
        }
        ptr++;
    
    }
}

