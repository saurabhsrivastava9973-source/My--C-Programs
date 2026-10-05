#include<stdio.h>
#include<stdbool.h>
int main(){
    char ch;
    printf("Enter Any One Alphabet  ");
    scanf("%c",&ch);
    bool vowel=(ch == 65 || ch == 69 ||
         ch == 73 || ch == 79 || ch == 85||ch==97||ch==101||
         ch==105||ch==111||ch==117);
    if(vowel){
        printf("Vowel Alphabet");
    }else {
        printf("Consonants");
    }
}