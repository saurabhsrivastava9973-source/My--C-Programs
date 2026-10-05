#include<stdio.h>
#include<stdbool.h>
int main(){
    char sym;
    printf("Enter Alphabet or digit or special symbol. ");
    scanf("%c",&sym);
    bool digits=(sym>=48 && sym<=57);
    bool ualphabet=(sym>=65 && sym<=90);
    bool lalphabet=(sym>=97 && sym<=122);
    if (digits){
        printf("Digit");
    }else if(ualphabet){
        printf("Alphabet");
    }else if(lalphabet){
        printf("Alphabet");
    }else{
        printf("Special Symbol");
    }
}