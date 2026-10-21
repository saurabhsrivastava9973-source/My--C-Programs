#include<stdio.h>
int vowel_counter(int j,char wor[],int count){
    if(wor[j]=='\0'){
        return count;
    }else if (wor[j]==65||wor[j]==97||wor[j]==69||
        wor[j]==101||wor[j]==73||wor[j]==105||
        wor[j]==79||wor[j]==111||wor[j]==85||wor[j]==117)
    {
        count++;
        return vowel_counter(j+1,wor,count);  
    }else{
        return vowel_counter(j+1,wor,count);
    }
}
int main(){
    char word[15];
    printf("Enter Word:- ");
    scanf("%14s",word);
    int count=0;
    int j=0;
    printf("Total no. of vowels= %d\n",vowel_counter(j,word,count));
    return 0;

}

