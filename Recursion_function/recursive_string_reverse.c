#include<stdio.h>
void reverse(int j,char wor[]){
    if(wor[j]=='\0'){
        return;
    }
    reverse(j+1,wor);
    printf("%c",wor[j]);
}
int main(){
    char word[15];  
    int j=0;
    printf("Enter a Word:- ");
    scanf("%14s",word);
    printf("Reverse Of The Word:- ");
    reverse(j,word);
    printf("\n");
    return 0;

}
