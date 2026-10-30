/*Write a program to count total no. of
characters(Lowercase, Uppercase,numbers) in a word*/

#include<stdio.h>

int main(){

    char code[30];

    printf("Enter A Character:- ");

    scanf("%29s",code);

    int n=0,u=0,l=0,i=0;

    while(code[i]!='\0'){

        if(code[i]>=65 && code[i]<=90){

            u++;

        }else if(code[i]>=97 && code[i]<=122){

            l++;
        }else if(code[i]>=48 && code[i]<=57){

            n++;

        }

        i++;

    }

    printf("Uppercase letters= %d\nLowercase letters= %d\nDigits= %d\n",u,l,n);
    return 0;
}
