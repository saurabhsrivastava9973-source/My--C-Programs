
#include<stdio.h>

int palindrome_checker(char *s);

int main(int argc, char * argv[]){

    if(argc!=2){

        printf("Usage ./reverse <word>\n");

        return 1;

    }

    char *word=argv[1];

    if(palindrome_checker(word)==1){

        printf("Palindrome\n");


    }else{
    
        printf("Not a Palindrome\n");
    
    }
    return 0;

}
int palindrome_checker(char *s){

    int i=0;

    while(s[i]!='\0'){

        if(s[i]>=65 && s[i]<=90){
            s[i]+=32;

        }

        i++;

    }

    char *start=s;
    char *end= s;

    while(*end!='\0'){

        end++;

    }
    end--;    
    while(start<end){
    
        if(*start!=*end){
            return 0;
    
        }
        start++;
        end--;
    
    }
    
    return 1;



}