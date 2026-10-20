#include<stdio.h>
int main(){
    char word[15];
    printf("Enter The Word:- ");
    scanf("%14s",word);
    int i=0,j=0,count=0,flag=0;
    while(word[i] != '\0'){
        j=0;
        count=0;
        while(word[j]!='\0'){
            if(word[i]==word[j]){
                count++;
            }
        
        j++;
        }
        if(count==1){
            flag=1;
            printf("First non-repeating ");
            printf("character is: '%c'\n",word[i]);
            break;
        }
    i++;
    }
if (flag== 0){
    printf("No unique character found!\n");
}
return 0;
}
