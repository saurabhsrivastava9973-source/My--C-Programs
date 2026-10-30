/*Write A Program To Check Whether Two User Defined Words Are Same
Or Not*/

#include<stdio.h>

int main(){

    char word1[15],word2[15];

    printf("Enter A 1st Word:- ");
    scanf("%14s",word1);

    printf("Enter A 2nd Word:- ");
    scanf("%14s",word2);

    int i=0,flag=0;
    /*Make Every Letter Small, so that, Compiler can compare 
    same word with diffrent case(Banana & BAnana)*/
    while(word1[i] !='\0' || word2[i]!='\0'){

        if (word1[i]>=65 && word1[i]<=90){
            
            word1[i]=word1[i]+32;

        }if (word2[i]>=65 && word2[i]<=90){

            word2[i]=word2[i]+32;

        }if(word1[i]==word2[i]){

            flag=1;
        
        }else{

            flag=0;
            break;
        }

        i++;

    }

    printf("Result:- ");

    if (flag==1){

         printf("Both Words are identical\n");

    }else{

        printf("Both Words Are Different\n");

    }

return 0;

}
