#include<stdio.h>
int main(){
    char word1[15],word2[15];
    int val=0;
    printf("Enter A 1st Word:- ");
    scanf("%14s",word1);
    printf("Enter A 2nd Word:- ");
    scanf("%14s",word2);
    int i=0;
    printf("Result: ");
    while(word1[i] != '\0' || word2[i] !='\0'){
        if(word1[i]==word2[i]){
            val=1;
        
        }else{
            val=0;
            break;
        }
        i++;
    }
    if (val==1){
         printf("Words are identical\n");

    }else{
        printf("Words Are Diffrent\n");
    }
return 0;
}
